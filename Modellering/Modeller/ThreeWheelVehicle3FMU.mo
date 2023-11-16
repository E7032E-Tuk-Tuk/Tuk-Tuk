model ThreeWheelVehicle3FMU
  import PlanarMechanics;
  parameter Real g = 9.82 "m/s2 Gravity";
  // Wheel parameters
  parameter Real wheelRadiusF = 0.28 "m";
  parameter Real inertiaWheelF = 0.3;
  parameter Real wheelRadiusL = 0.28 "m";
  parameter Real inertiaWheelL = 0.3;
  parameter Real wheelRadiusR = 0.28 "m";
  parameter Real inertiaWheelR = 0.3;
  parameter Real gearRatio = 1/8;
  parameter Real c_rollF = 0.05 "Rolling resistance";
  parameter Real c_rollL = 0.05 "Rolling resistance";
  parameter Real c_rollR = 0.05 "Rolling resistance";
  // Vehicle parameters, be careful with mass center placement!
  parameter Real mass = 350 "kg";
  parameter Real inertiaBody = 350 "kgm2";
  //3.176*mass - 1754.164; // Estimation of yaw inertia for cars
  parameter Real frontLength = 1.5 "m";
  parameter Real backLength = 0.5 "m";
  parameter Real vehicleWidth = 1 "m";
  parameter Real massCenterY = backLength/(backLength + frontLength) * 100 "%";
  parameter Real massCenterZ = 0.3 "m height to COM";
  parameter Real vehicleFrontArea = 1.5 "m2, for air resistance calculation";
  parameter Real dragCoef = 0.5 "Air drag coefficient";
  // Slip parameters
  parameter Real muAF = 1;
  parameter Real muSF = 0.7;
  parameter Real sAdF = .07;
  parameter Real sSlF = .2;
  parameter Real vAdF = 0.1;
  parameter Real vSlF = 0.3;
  parameter Real muAL = 1;
  parameter Real muSL = 0.7;
  parameter Real sAdL = .07;
  parameter Real sSlL = .2;
  parameter Real vAdL = 0.1;
  parameter Real vSlL = 0.3;
  parameter Real muAR = 1;
  parameter Real muSR = 0.7;
  parameter Real sAdR = .07;
  parameter Real sSlR = .2;
  parameter Real vAdR = 0.1;
  parameter Real vSlR = 0.3;
  // Other
  parameter Real speedStart = 40/3.6 "m/s";
  //parameter Real omegaStart = speedStart/wheelRadius "rad/s";
  // Calculated values
  Real speed(start = speedStart) "m/s Car speed";
  Real S(start = 0) "m Traveled length";
  Real Pleft(start = 0) "W Power of left rear wheel";
  Real Pright(start = 0) "W Power of right rear wheel";
  // Values in another coordinate frame
  Real[2] v_car(start={speedStart,0}) "Velocity in car frame";
  Real[2] a_car(start={speedStart,0}) "Acceleration in car frame";
  Real[2,2] Trot(start={{0, 1}, {1, 0}}) "Rotation matrix";
  Real phi_car(start=0) "Angular velocity in car frame";
  Real w_car(start=0) "Angular velocity in car frame";
  Real z_car(start=0) "Angulaar acceleration in car frame";
  Real effRadiusFrontWheel(start=wheelRadiusF);
  Real effRadiusRearLeftWheel(start=wheelRadiusL);
  Real effRadiusRearRightWheel(start=wheelRadiusR);
  Real[1,3] forceFrontWheel;
  Real[1,3] forceRearLeftWheel;
  Real[1,3] forceRearRightWheel;
  Real slipAngleFrontWheel(start=0);
  Real slipAngleRearLeftWheel(start=0);
  Real slipAngleRearRightWheel(start=0);
  parameter Real turnRadiusMAX = 1000;
  Real turnRadiusOptimal(start=turnRadiusMAX);
  Real turnRadiusReal(start=turnRadiusMAX);
  // World
  inner PlanarMechanics.PlanarWorldIn3D planarWorld(constantGravity = {0, 0}) annotation(
    Placement(visible = true, transformation(origin = {-158, 114}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  // Wheels
  WheelWithSlip rearRightWheel(
    N = g*mass*(1 - massCenterY/100)*0.5, cr = c_rollR, 
    mu_A = muAR, 
    mu_S = muSR, 
    r = {0, 1}, 
    radius = wheelRadiusR, 
    sAdhesion = sAdR, 
    sSlide = sSlR, 
    vAdhesion_min = vAdR, 
    vSlide_min = vSlR, 
    w_roll(start = speedStart/wheelRadiusR)) annotation(
    Placement(visible = true, transformation(origin = {58, -56}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  WheelWithSlip rearLeftWheel(
    N = g*mass*(1 - massCenterY/100)*0.5, cr = c_rollL, 
    mu_A = muAL, 
    mu_S = muSL, 
    r = {0, 1}, 
    radius = wheelRadiusL, 
    sAdhesion = sAdL, 
    sSlide = sSlL, 
    vAdhesion_min = vAdL, 
    vSlide_min = vSlL, 
    w_roll(start = speedStart/wheelRadiusL)) annotation(
    Placement(visible = true, transformation(origin = {-52, -48}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  WheelWithSlip frontWheel(
    N = g*mass*massCenterY/100, cr = c_rollF, 
    mu_A = muAF, 
    mu_S = muSF, 
    r = {0, 1}, 
    radius = wheelRadiusF, 
    sAdhesion = sAdF, 
    sSlide = sSlF, 
    vAdhesion_min = vAdF, 
    vSlide_min = vSlF, 
    w_roll(start = speedStart/wheelRadiusF)) annotation(
    Placement(visible = true, transformation(origin = {8, 120}, extent = {{8, -6}, {-8, 6}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia rearLeftInertia(
    J = inertiaWheelL, 
    phi(fixed = true, start = 0), 
    w(fixed = true, start = speedStart/wheelRadiusL)) annotation(
    Placement(visible = true, transformation(origin = {-96, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia rearRightInertia(
    J = inertiaWheelR, 
    phi(fixed = true, start = 0), 
    w(fixed = true, start = speedStart/wheelRadiusR)) annotation(
    Placement(visible = true, transformation(origin = {90, -56}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia frontInertia(
    J = inertiaWheelF, 
    phi(fixed = true, start = 0), 
    w(fixed = true, start = speedStart/wheelRadiusF)) annotation(
    Placement(visible = true, transformation(origin = {-34, 120}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque torqueRearLeft annotation(
    Placement(visible = true, transformation(origin = {-162, -22}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque torqueRearRight annotation(
    Placement(visible = true, transformation(origin = {160, -10}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.IdealGear gearLeft(ratio = gearRatio)  annotation(
    Placement(visible = true, transformation(origin = {-132, -46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.IdealGear gearRight(ratio = gearRatio)  annotation(
    Placement(visible = true, transformation(origin = {124, -58}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));

// Vehicle body
  // Test translation to body, can it have 0 length that can translate in x-direction?
  PlanarMechanics.Parts.FixedTranslation rearLeft(r = {vehicleWidth/2, 0}) annotation(
    Placement(visible = true, transformation(origin = {-20, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation rearRight(r = {vehicleWidth/2, 0}) annotation(
    Placement(visible = true, transformation(origin = {18, -54}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation rear(
    color = {0, 255, 0}, r = {0, backLength}, width = .2) annotation(
    Placement(visible = true, transformation(origin = {-8, -16}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  PlanarMechanics.Parts.FixedTranslation front(
    color = {0, 255, 0}, r = {0, frontLength - 0.1}, width = .2) annotation(
    Placement(visible = true, transformation(origin = {-8, 24}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  PlanarMechanics.Parts.Body body(
    I = inertiaBody, 
    enableGravity = false, 
    m = mass, 
    phi(fixed = true), 
    r(each fixed = true), 
    v(each fixed = true, 
    start = {0, speedStart}), 
    w(fixed = true)) annotation(
    Placement(visible = true, transformation(origin = {64, 16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation frontTrail(r = {0, -0.1}) annotation(
    Placement(visible = true, transformation(origin = {10, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  PlanarMechanics.Parts.Body body2(I = .00000001, enableGravity = false, m = .1) annotation(
    Placement(visible = true, transformation(origin = {40, 130}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Joints.Revolute revolute(useFlange = true) annotation(
    Placement(visible = true, transformation(origin = {8, 60}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  Modelica.Mechanics.Rotational.Sensors.AngleSensor angleSensor annotation(
    Placement(visible = true, transformation(origin = {-44, 90}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation front2(r = {0.0000000001, 0}) annotation(
    Placement(visible = true, transformation(origin = {12, 38}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  PlanarMechanics.VehicleComponents.AirResistanceLongitudinal airResistanceLongitudinal(
    area = vehicleFrontArea, c_W = dragCoef, r = {0, 1})  annotation(
    Placement(visible = true, transformation(origin = {72, 42}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  WeightTransfer weightTransfer(
    m = mass,
    h = massCenterZ,
    L = frontLength + backLength,
    Wr = vehicleWidth,
    v = v_car,
    a = a_car,
    w = w_car
    ) annotation(
    Placement(visible = true, transformation(origin = {-88, 8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Real debugWeghtTransfer;
  Real debugWheelInTheAir;
  // Inputs and outputs
  Modelica.Blocks.Interfaces.RealInput inputSteering annotation(
    Placement(visible = true, transformation(origin = {-200, 60}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-190, 60}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput inputRearLeftTorque annotation(
    Placement(visible = true, transformation(origin = {-200, -20}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-190, -20}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput inputRearRightTorque annotation(
    Placement(visible = true, transformation(origin = {200, -20}, extent = {{20, -20}, {-20, 20}}, rotation = 0), iconTransformation(origin = {206, -8}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outSlipAngleFront annotation(
    Placement(visible = true, transformation(origin = {270, 132}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {270, 132}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outSlipAngleLeft annotation(
    Placement(visible = true, transformation(origin = {266, 98}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {266, 98}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outSlipAngleRight annotation(
    Placement(visible = true, transformation(origin = {266, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {266, 70}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outTurnRadOptimal annotation(
    Placement(visible = true, transformation(origin = {266, 38}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {266, 38}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outTurnRadReal annotation(
    Placement(visible = true, transformation(origin = {268, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {268, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealVectorOutput outForceLeftWheel[1,3] annotation(
    Placement(visible = true, transformation(origin = {258, -86}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {258, -86}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealVectorOutput outForceRightWheel[1,3] annotation(
    Placement(visible = true, transformation(origin = {262, -134}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {262, -134}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealVectorOutput outForceFrontWheel[1,3] annotation(
    Placement(visible = true, transformation(origin = {258, -38}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outCarDistance annotation(
    Placement(visible = true, transformation(origin = {372, 130}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {372, 130}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outCarSpeed annotation(
    Placement(visible = true, transformation(origin = {376, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {376, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealVectorOutput outCarVelocity[2] annotation(
    Placement(visible = true, transformation(origin = {364, 86}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {364, 86}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealVectorOutput outCarAcc[2] annotation(
    Placement(visible = true, transformation(origin = {368, -2}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {368, -2}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealVectorOutput outCarPosition[2] annotation(
    Placement(visible = true, transformation(origin = {364, 180}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {364, 180}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outCarAngle annotation(
    Placement(visible = true, transformation(origin = {370, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {370, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outCarAngularVelocity annotation(
    Placement(visible = true, transformation(origin = {374, -92}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {374, -92}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outCarAngularAcc annotation(
    Placement(visible = true, transformation(origin = {378, -136}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {378, -136}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outEffRadiusFrontWheel annotation(
    Placement(visible = true, transformation(origin = {480, 174}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {480, 174}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outEffRadiusLeftWheel annotation(
    Placement(visible = true, transformation(origin = {482, 126}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {482, 126}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outEffRadiusRightWheel annotation(
    Placement(visible = true, transformation(origin = {480, 74}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {480, 74}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outActualSteeringAngle annotation(
    Placement(visible = true, transformation(origin = {478, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {478, 30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outSlipFrontWheel[2] annotation(
    Placement(visible = true, transformation(origin = {478, -14}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {478, -14}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outSlipLeftWheel[2] annotation(
    Placement(visible = true, transformation(origin = {480, -60}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {480, -60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outSlipRightWheel[2] annotation(
    Placement(visible = true, transformation(origin = {482, -102}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {482, -102}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outSlipRatioFront annotation(
    Placement(visible = true, transformation(origin = {568, -14}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {478, -14}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outSlipRatioLeft annotation(
    Placement(visible = true, transformation(origin = {568, -58}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {480, -60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outSlipRatioRight annotation(
    Placement(visible = true, transformation(origin = {568, -98}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {482, -102}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain neg(k = -1)  annotation(
    Placement(visible = true, transformation(origin = {-138, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Position positionPhi(exact = true) annotation(
    Placement(visible = true, transformation(origin = {-74, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain neg2(k = -1) annotation(
    Placement(visible = true, transformation(origin = {-76, 90}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outTrollFront annotation(
    Placement(visible = true, transformation(origin = {570, 176}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {570, 176}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outTrollLeft annotation(
    Placement(visible = true, transformation(origin = {574, 128}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {574, 128}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealOutput outTrollRight annotation(
    Placement(visible = true, transformation(origin = {574, 82}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {574, 82}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  
  Modelica.Blocks.Interfaces.RealOutput outWeightTransfer[3] annotation(
    Placement(visible = true, transformation(origin = {572, 36}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {572, 36}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque frontRollingResistance annotation(
    Placement(visible = true, transformation(origin = {-6, 154}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque rearRightRollingResistance annotation(
    Placement(visible = true, transformation(origin = {60, -16}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque rearLeftRollResistance annotation(
    Placement(visible = true, transformation(origin = {-52, -16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  speed = sqrt(body.v[1]^2 + body.v[2]^2);
  S = abs(body.r[1]) + abs(body.r[2]);
  Pleft = rearLeftWheel.w_roll*torqueRearLeft.tau;
  Pright = rearRightWheel.w_roll*torqueRearRight.tau;
// Car frame equations
  Trot = [-sin(body.phi), cos(body.phi); cos(body.phi), sin(body.phi)];
  v_car = Trot*body.v;
  a_car = Trot*body.a;
  phi_car = -body.phi;
  w_car = -body.w;
  z_car = -body.z;
// Effective radius ?
  effRadiusFrontWheel = frontWheel.v_long/frontWheel.w_roll;
  effRadiusRearLeftWheel = rearLeftWheel.v_long/rearLeftWheel.w_roll;
  effRadiusRearRightWheel = rearRightWheel.v_long/rearRightWheel.w_roll;
// Forces on the wheels in car coordinate frame
  forceFrontWheel = [frontWheel.f_long, frontWheel.f_lat, frontWheel.fN];
  forceRearLeftWheel = [rearLeftWheel.f_long, rearLeftWheel.f_lat, rearLeftWheel.fN];
  forceRearRightWheel = [rearRightWheel.f_long, rearRightWheel.f_lat, rearRightWheel.fN];
// Slip angle for each wheel
  slipAngleFrontWheel = atan(frontWheel.v_lat/frontWheel.v_long);
  slipAngleRearLeftWheel = atan(rearLeftWheel.v_lat/rearLeftWheel.v_long);
  slipAngleRearRightWheel = atan(rearRightWheel.v_lat/rearRightWheel.v_long);
// Turning radius
  turnRadiusOptimal = min(sqrt(backLength^2 + (backLength + frontLength)^2/(tan(angleSensor.phi)^2 + 0.000000001)), turnRadiusMAX);
  turnRadiusReal = min(sqrt(speed^2/(body.w^2 + 0.000000001)), turnRadiusMAX);
// Outputs
  outSlipAngleFront = slipAngleFrontWheel;
  outSlipAngleLeft = slipAngleRearLeftWheel;
  outSlipAngleRight = slipAngleRearRightWheel;
  outTurnRadOptimal = turnRadiusOptimal;
  outTurnRadReal = turnRadiusReal;
  outForceFrontWheel = forceFrontWheel;
  outForceLeftWheel = forceRearLeftWheel;
  outForceRightWheel = forceRearRightWheel;
  outCarPosition = body.r;
  outCarDistance = S;
  outCarVelocity = v_car;
  outCarAcc = a_car;
  outCarSpeed = speed;
  outCarAngle = phi_car;
  outCarAngularVelocity = w_car;
  outCarAngularAcc = z_car;
  outEffRadiusFrontWheel = effRadiusFrontWheel;
  outEffRadiusLeftWheel = effRadiusRearLeftWheel;
  outEffRadiusRightWheel = effRadiusRearRightWheel;
  outSlipFrontWheel = {frontWheel.v_slip_long, frontWheel.v_slip_lat};
  outSlipLeftWheel = {rearLeftWheel.v_slip_long, rearLeftWheel.v_slip_lat};
  outSlipRightWheel = {rearRightWheel.v_slip_long, rearRightWheel.v_slip_lat};
  outSlipRatioFront = -frontWheel.v_slip_long / frontWheel.v_long;
  outSlipRatioLeft = -rearLeftWheel.v_slip_long / rearLeftWheel.v_long;
  outSlipRatioRight = -rearRightWheel.v_slip_long / rearRightWheel.v_long;
  outTrollFront = frontWheel.torque_roll;
  outTrollLeft = rearLeftWheel.torque_roll;
  outTrollRight = rearRightWheel.torque_roll;
// Debug
  debugWeghtTransfer = (weightTransfer.y[1] + weightTransfer.y[2] + weightTransfer.y[3]);
  debugWheelInTheAir = frontWheel.fN + rearLeftWheel.fN + rearRightWheel.fN - mass*g;
// Connections
  connect(rearLeftWheel.frame_a, rearLeft.frame_a) annotation(
    Line(points = {{-48, -48}, {-30, -48}, {-30, -50}}));
  connect(frontInertia.flange_b, frontWheel.flange_a) annotation(
    Line(points = {{-24, 120}, {0, 120}}));
  connect(rearRight.frame_b, rearRightWheel.frame_a) annotation(
    Line(points = {{28, -54}, {54, -54}, {54, -56}}));
  connect(rearLeft.frame_b, rearRight.frame_a) annotation(
    Line(points = {{-10, -50}, {8, -50}, {8, -54}}));
  connect(rear.frame_b, front.frame_a) annotation(
    Line(points = {{-8, -6}, {-8, 14}}, color = {95, 95, 95}));
  connect(rear.frame_a, rearLeft.frame_b) annotation(
    Line(points = {{-8, -26}, {-10, -26}, {-10, -50}}));
  connect(frontWheel.frame_a, frontTrail.frame_b) annotation(
    Line(points = {{11, 120}, {11, 109.5}, {10, 109.5}, {10, 100}}));
  connect(body2.frame_a, frontTrail.frame_b) annotation(
    Line(points = {{30, 130}, {10, 130}, {10, 100}}, color = {95, 95, 95}));
  connect(frontTrail.frame_a, revolute.frame_b) annotation(
    Line(points = {{10, 80}, {8, 80}, {8, 70}}, color = {95, 95, 95}));
  connect(revolute.flange_a, angleSensor.flange) annotation(
    Line(points = {{-2, 60}, {-2, 90}, {-34, 90}}));
  connect(body.frame_a, front.frame_a) annotation(
    Line(points = {{54, 16}, {-8, 16}}));
  connect(revolute.frame_a, front2.frame_a) annotation(
    Line(points = {{8, 50}, {8, 42}, {22, 42}, {22, 38}}, color = {95, 95, 95}));
  connect(front.frame_b, front2.frame_b) annotation(
    Line(points = {{-8, 34}, {-8, 40}, {2, 40}, {2, 38}}, color = {95, 95, 95}));
  connect(torqueRearRight.flange, gearRight.flange_a) annotation(
    Line(points = {{150, -10}, {134, -10}, {134, -58}}));
  connect(torqueRearLeft.flange, gearLeft.flange_a) annotation(
    Line(points = {{-152, -22}, {-142, -22}, {-142, -46}}));
  connect(gearLeft.flange_b, rearLeftInertia.flange_a) annotation(
    Line(points = {{-122, -46}, {-106, -46}, {-106, -48}}));
  connect(rearLeftInertia.flange_b, rearLeftWheel.flange_a) annotation(
    Line(points = {{-86, -48}, {-62, -48}}));
  connect(rearRightWheel.flange_a, rearRightInertia.flange_b) annotation(
    Line(points = {{68, -56}, {80, -56}}));
  connect(rearRightInertia.flange_a, gearRight.flange_b) annotation(
    Line(points = {{100, -56}, {107, -56}, {107, -58}, {114, -58}}));
  connect(airResistanceLongitudinal.frame_a, body.frame_a) annotation(
    Line(points = {{62, 42}, {54, 42}, {54, 16}}, color = {95, 95, 95}));
  connect(inputRearLeftTorque, torqueRearLeft.tau) annotation(
    Line(points = {{-200, -20}, {-174, -20}, {-174, -22}}, color = {0, 0, 127}));
  connect(inputRearRightTorque, torqueRearRight.tau) annotation(
    Line(points = {{200, -20}, {172, -20}, {172, -10}}, color = {0, 0, 127}));
  connect(outActualSteeringAngle, neg2.y);
  connect(inputSteering, neg.u) annotation(
    Line(points = {{-200, 60}, {-150, 60}}, color = {0, 0, 127}));
  connect(neg.y, positionPhi.phi_ref) annotation(
    Line(points = {{-126, 60}, {-86, 60}}, color = {0, 0, 127}));
  connect(positionPhi.flange, revolute.flange_a) annotation(
    Line(points = {{-64, 60}, {-2, 60}}));
  connect(neg2.u, angleSensor.phi) annotation(
    Line(points = {{-64, 90}, {-54, 90}}, color = {0, 0, 127}));
  connect(rearLeftWheel.dynamicLoad, weightTransfer.y[2]) annotation(
    Line(points = {{-52, -58}, {-54, -58}, {-54, -66}, {-72, -66}, {-72, 8}, {-76, 8}}, color = {0, 0, 127}));
  connect(frontWheel.dynamicLoad, weightTransfer.y[1]) annotation(
    Line(points = {{8, 114}, {-20, 114}, {-20, 8}, {-76, 8}}, color = {0, 0, 127}));
  connect(rearRightWheel.dynamicLoad, weightTransfer.y[3]) annotation(
    Line(points = {{58, -66}, {58, -72}, {-72, -72}, {-72, 8}, {-76, 8}}, color = {0, 0, 127}));
  connect(outWeightTransfer, weightTransfer.y);
  connect(rearLeftRollResistance.tau, rearLeftWheel.outRollTorque) annotation(
    Line(points = {{-64, -16}, {-66, -16}, {-66, -56}, {-62, -56}}, color = {0, 0, 127}));
  connect(rearLeftRollResistance.flange, rearLeftWheel.flange_a) annotation(
    Line(points = {{-42, -16}, {-42, -34}, {-62, -34}, {-62, -48}}));
  connect(rearRightRollingResistance.tau, rearRightWheel.outRollTorque) annotation(
    Line(points = {{72, -16}, {72, -64}, {68, -64}}, color = {0, 0, 127}));
  connect(rearRightRollingResistance.flange, rearRightWheel.flange_a) annotation(
    Line(points = {{50, -16}, {50, -34}, {68, -34}, {68, -56}}));
  connect(frontRollingResistance.tau, frontWheel.outRollTorque) annotation(
    Line(points = {{-18, 154}, {-16, 154}, {-16, 114}, {0, 114}}, color = {0, 0, 127}));
  connect(frontWheel.flange_a, frontRollingResistance.flange) annotation(
    Line(points = {{0, 120}, {4, 120}, {4, 154}}));
  annotation(
    Placement(visible = true, transformation(origin = {16, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)),
    uses(Modelica(version = "4.0.0"), PlanarMechanics(version = "1.6.0")),
    Diagram(coordinateSystem(extent = {{-220, 200}, {500, -160}})),
    version = "");
end ThreeWheelVehicle3FMU;
