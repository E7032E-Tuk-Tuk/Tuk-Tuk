/*
	First draft code for torque vectoring controller
	Magnus Norén, 2023
*/

#include <stdio.h>
#include <math.h>

// Everything is given in SI base units

// Vehicle constants
#define WheelRadiusUnloaded 0.28
#define WheelRadiusLoaded 0.28		// The simulation doesn't distinguish between unloaded, loaded and effective radius
#define WheelRadiusEffective ((2*WheelRadiusUnloaded + WheelRadiusLoaded) / 3)

#define WheelBase 2.0
#define TrackWidth 1.0
#define GearRatio 7.0

// Limits on positive (accelerating) torque, parametrized by a limit on torque and another limit on power
#define MaxMotorTorque ??? // For low angular velocity. Enter value in Nm
#define MaxMotorPower ??? // For higher angular velocity. Enter value in W (note that this should be the effective power, not the electrical power going in)
#define AngVelThresholdAcc (MaxMotorPower / MaxMotorTorque) // Use first limit when below threshold and second limit when above

// Limits on negative (braking) torque. Don't know if this also depends on angular velocity, and can be parametrized the same way as the maximum positive? Someone plz HALP!
#define MaxBrakingTorque ???
#define MaxBrakingPower ???
#define AngVelThresholdBrake(MaxBrakingPower / MaxBrakingTorque)

// Yaw rate PI controller constants
#define Kp 700
#define Ki 180

// Anti-spin feature constants
#define A_lambda 0.06
#define B_lambda 20.0

// Misc constants
#define Ts = ??? // Sampling time
#define MaxCMTorqueFraction 0.8 // Fraction of the maximum available torque to be used for common mode when at full throttle
#define MinVelLong = 0.05 // Minimum longitudinal velocity to trigger anti-slip system. Avoids division by zero

// ------------------------------------------------------------------------
// Global variables (ikr...)

// Outputs from the FMU or sensors
float velLong = 0;
float steerAngleMeas = 0;
float yawRate = 0;
// The FMU outputs the angular velocities of the wheels, but for a practical test we would probably read it from the motors
float angVelMotorLeft = 0;
float angVelMotorRight = 0;
float angVelWheelLeft = 0;
float angVelWheelRight = 0;

float accInput = 0; // Accelerator input (Here I'm assuming a value between 0 and 1)

// Variables for the Yaw rate PI controller
float yawTorqueRef = 0;
float previousYawTorqueRef = 0;
float previousError = 0;

// Outputs from the TV controller
float motorTorqueLeftRef = 0;
float motorTorqueRightRef = 0;

// Available motor torque limits
float maxMotorTorqueLeft;
float maxMotorTorqueRight;
float minMotorTorqueLeft;
float minMotorTorqueRight;

// ------------------------------------------------------------------------

void getMotorTorqueLimits()
{
	// Change this function if there is a better method to estimate the limits, especially the lower limits (limits on braking torque)
	
	// Limits on positive (accelerating) torque
	if (angVelMotorLeft < AngVelThresholdAcc){
		maxMotorTorqueLeft = MaxMotorTorque;
	}
	else {
		maxMotorTorqueLeft = MaxMotorPower / angVelMotorLeft;
	}
	if (angVelMotorRight < AngVelThresholdAcc){
		maxMotorTorqueRight = MaxMotorTorque;
	}
	else {
		maxMotorTorqueRight = MaxMotorPower / angVelMotorRight;
	}
	
	// Limits on negative (braking) torque
	if (angVelMotorLeft < AngVelThresholdBrake){
		minMotorTorqueLeft = -MaxBrakingTorque;
	}
	else {
		minMotorTorqueLeft = -MaxBrakingPower / angVelMotorLeft;
	}
	if (angVelMotorRight < AngVelThresholdBrake){
		minMotorTorqueRight = -MaxBrakingTorque;
	}
	else {
		minMotorTorqueRight = -MaxBrakingPower / angVelMotorRight;
	}	
}	

void yawRateController()
{
	float yawRateRef = velLong * tan(steerAngleMeas) / WheelBase;
	float error = yawTorqueRef - yawRate;
	
	// PI controller in incremental form (aka "velocity form")
	yawTorqueRef = previousYawTorqueRef + Kp*(error - previousError) + Ki*Ts*error;
	previousError = error;
}	

void torqueVectoring()
{
	// Determine differential mode torque
	float torqueDM = WheelRadiusLoaded * yawTorqueRef / (GearRatio * TrackWidth);
	
	motorTorqueLeftRef = torqueCM + torqueDM; // NOTE: This assumes that the yaw angle is defined in a clockwise sense; otherwise, flip the signs
	motorTorqueRightRef = torqueCM - torqueDM;
	
	// Check for motor torque limits and saturate the signals
	motorTorqueLeftRef = fmin(maxMotorTorqueLeft, fmax(motorTorqueLeftRef, minMotorTorqueLeft));
	motorTorqueRightRef = fmin(maxMotorTorqueRight, fmax(motorTorqueRightRef, minMotorTorqueRight));

	// Report the saturated value back to the yaw rate PI as the previous output, which should prevent integrator windup since it's in incremental form
	float saturatedDM = (motorTorqueLeftRef - motorTorqueRightRef) / 2; // Again, flip the signs here if using CCW yaw
	previousYawTorqueRef = saturatedDM * GearRatio * TrackWidth / WheelRadiusLoaded;
}

void antiSpin()
{
	// This code aims to limit the slip ratios below about 0.1 in absolute value to prevent wheel spin and loss of grip
	
	if (velLong > MinVelLong){		
		float slipRatioLeft = (angVelWheelLeft * WheelRadiusEffective - velLong) / velLong;
		float slipRatioRight = (angVelWheelRight * WheelRadiusEffective - velLong) / velLong;
		
		float limitFractionLeft = exp(-B_lambda * (fabs(slipRatioLeft) - A_lambda));
		limitFractionLeft = fmin(limitFractionLeft, 1);
		float limitFractionRight = exp(-B_lambda * (fabs(slipRatioRight) - A_lambda));
		limitFractionRight = fmin(limitFractionRight, 1);
	
		motorTorqueLeftRef = limitFractionLeft * motorTorqueLeftRef;
		motorTorqueRightRef = limitFractionRight * motorTorqueRightRef;
	}		
	
	// NOTE: In principle we could recalculate previousYawTorqueRef here instead of in the torqueVectoring step,
	// but at least in the simulations it seems fine to keep integrating when the anti-spin kicks in.
	// Change this if necessary, but be aware it could cause unwanted behaviour since the anti-spin can limit the output quite aggressively.
	
	// Update: New simulation indicates that it might be benificial to do the recalculation here after all. Best to try both ways.
	// To change, move the last two lines from torqueVectoring() here.
}	

// Main function here:
void calculateMotorTorqueRef()
{
	// Calculates reference torque values to send to the motor controller and stores them in the global variables motorTorqueLeftRef and motorTorqueRightRef
	
	angVelMotorLeft = angVelWheelLeft * GearRatio;
	angVelMotorRight = angVelWheelRight * GearRatio;
	/* Replace the above code with the following if we're measuring motor speeds instead of wheel speeds
		angVelWheelLeft = angVelMotorLeft / GearRatio;
		angVelWheelRight = angVelMotorRight / GearRatio;
	*/
	
	getMotorTorqueLimits();
	
	// Determine common mode torque
	float torqueCM = accInput * MaxCMTorqueFraction * fmin(maxMotorTorqueLeft, maxMotorTorqueRight);
	
	yawRateController();
	torqueVectoring();
	antiSpin();
}	