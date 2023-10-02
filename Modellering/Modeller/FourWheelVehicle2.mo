model FourWheelVehicle2
  import PlanarMechanics;
  parameter Real g = 9.82 "m/s2 Gravity";
  // Wheel parameters
  parameter Real wheelRadius = 0.28 "m";
  parameter Real inertiaWheel = 0.3;
  // Vehicle parameters, be careful with mass center placement!
  parameter Real mass = 1300 "kg";
  parameter Real inertiaBody = 1300 "kgm2";//3.176*mass - 1754.164; // Estimation of yaw inertia for cars
  parameter Real vehicleLength = 2.5 "m";
  parameter Real vehicleWidth = 1.5 "m";
  parameter Real massCenterX = 50 "Percentage of vehicle width, 0 - left, 100 - right"; // not functional
  parameter Real massCenterY = 60 "Percentage of vehicle length, 0 - rear, 100 - front";
  // Slip parameters
  parameter Real muA = 1;
  parameter Real muS = 0.7;
  parameter Real sAd = .07;
  parameter Real sSl = .2;
  parameter Real vAd = 0.1;
  parameter Real vSl = 0.3;
  // Other
  parameter Real turnRadius = 1e10 "m";
  parameter Real speedStart = 10/3.6 "m/s"; // Start speed of vehicle
  parameter Real omegaStart = speedStart/wheelRadius "rad/s"; // Start angle velocity of each wheel inertia
  //parameter Real turnAngle = 10/180*3.14159 "rad";
  parameter Real leftAckermann = -atan(vehicleLength / (turnRadius - vehicleWidth/2));
  parameter Real rightAckermann = -atan(vehicleLength / (turnRadius + vehicleWidth/2));
  Real speed(start=speedStart) "m/s Car speed";
  Real S(start=0) "m Traveled length";
  Real R(start=turnRadius) "m Radius of turning";
  Real Pleft(start=0) "W Power of left rear wheel";
  Real Pright(start=0) "W Power of right rear wheel";
  
  
  // World
  inner PlanarMechanics.PlanarWorldIn3D planarWorld(
    constantGravity = {0, 0}) 
    annotation(
    Placement(visible = true, transformation(origin = {-162, -80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  // Wheels
  WheelWithSlip rearRightWheel(
    N = g*mass*(1 - massCenterY/100)*massCenterX/100, 
    mu_A = muA, 
    mu_S = muS, 
    r = {0, 1}, 
    radius = wheelRadius, 
    sAdhesion = sAd, 
    sSlide = sSl, 
    vAdhesion_min = vAd, 
    vSlide_min = vSl, 
    w_roll(start = omegaStart)) 
    annotation(
    Placement(visible = true, transformation(origin = {58, -56}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  WheelWithSlip rearLeftWheel(
    N = g*mass*(1 - massCenterY/100)*(1 - massCenterX/100), 
    mu_A = muA, 
    mu_S = muS, 
    r = {0, 1}, 
    radius = wheelRadius, 
    sAdhesion = sAd, 
    sSlide = sSl, 
    vAdhesion_min = vAd, 
    vSlide_min = vSl, 
    w_roll(start = omegaStart)) 
    annotation(
    Placement(visible = true, transformation(origin = {-52, -48}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  WheelWithSlip frontRightWheel(
    N = g*mass*massCenterY/100*massCenterX/100, 
    mu_A = muA, 
    mu_S = muS, 
    r = {tan(rightAckermann),1}, 
    radius = wheelRadius, 
    sAdhesion = sAd, 
    sSlide = sSl, 
    vAdhesion_min = vAd, 
    vSlide_min = vSl, 
    w_roll(start = omegaStart))  
    annotation(
    Placement(visible = true, transformation(origin = {56, 94}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  WheelWithSlip frontLeftWheel(
    N = g*mass*massCenterY/100*(1 - massCenterX/100), 
    mu_A = muA, 
    mu_S = muS, 
    r = {tan(leftAckermann),1}, 
    radius = wheelRadius, 
    sAdhesion = sAd, 
    sSlide = sSl, 
    vAdhesion_min = vAd, 
    vSlide_min = vSl, 
    w_roll(start = omegaStart))
    annotation(
    Placement(visible = true, transformation(origin = {-76, 94}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));

  Modelica.Mechanics.Rotational.Components.Inertia rearLeftInertia(
    J = inertiaWheel, 
    phi(fixed = true, start = 0), 
    w(fixed = true, start = omegaStart)) 
    annotation(
    Placement(visible = true, transformation(origin = {-78, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia rearRightInertia(
    J = inertiaWheel, 
    phi(fixed = true, start = 0), 
    w(fixed = true, start = omegaStart)) 
    annotation(
    Placement(visible = true, transformation(origin = {86, -56}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia frontLeftInertia(
    J = inertiaWheel, 
    phi(fixed = true, start = 0), 
    w(fixed = true, start = omegaStart))  
    annotation(
    Placement(visible = true, transformation(origin = {-112, 94}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia frontRightInertia(
    J = inertiaWheel, 
    phi(fixed = true, start = 0), 
    w(fixed = true, start = omegaStart))  
    annotation(
    Placement(visible = true, transformation(origin = {90, 94}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));

  Modelica.Blocks.Sources.Constant const(k = 0) annotation(
    Placement(visible = true, transformation(origin = {-122, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  // Vehicle body
  // Test translation to body, can it have 0 length that can translate in x-direction?
  PlanarMechanics.Parts.FixedTranslation rearLeft(r = {vehicleWidth/2, 0}) annotation(
    Placement(visible = true, transformation(origin = {-20, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation rearRight(r = {vehicleWidth/2, 0}) annotation(
    Placement(visible = true, transformation(origin = {18, -54}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation rear(r = {0, vehicleLength*massCenterY/100 - wheelRadius}) annotation(
    Placement(visible = true, transformation(origin = {-8, -16}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  PlanarMechanics.Parts.FixedTranslation front(r = {0, vehicleLength*(1 - massCenterY/100)}) annotation(
    Placement(visible = true, transformation(origin = {-8, 24}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  PlanarMechanics.Parts.FixedTranslation frontLeft(r = {vehicleWidth/2, 0})  annotation(
    Placement(visible = true, transformation(origin = {-28, 46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation frontRight(r = {-vehicleWidth/2, 0})  annotation(
    Placement(visible = true, transformation(origin = {12, 44}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.Body body(I = inertiaBody, enableGravity = false, m = mass, phi(fixed = true), r(each fixed = true), v(each fixed = true, start = {0, speedStart}), w(fixed = true)) annotation(
    Placement(visible = true, transformation(origin = {18, 2}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque torqueRearLeft annotation(
    Placement(visible = true, transformation(origin = {-124, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque torqueRearRight annotation(
    Placement(visible = true, transformation(origin = {130, -56}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const1(k = 10) annotation(
    Placement(visible = true, transformation(origin = {-158, -46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const2(k = 10)  annotation(
    Placement(visible = true, transformation(origin = {162, -60}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation frontLeftTrail(r = {0, -wheelRadius/5})  annotation(
    Placement(visible = true, transformation(origin = {-54, 78}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  PlanarMechanics.Parts.Body leftBody(I = .00000001, enableGravity = false, m = .1)  annotation(
    Placement(visible = true, transformation(origin = {-38, 104}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.Body rightBody(I = .00000001, enableGravity = false, m = .1)  annotation(
    Placement(visible = true, transformation(origin = {12, 104}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation frontRightTrail(r = {0, -wheelRadius/5})  annotation(
    Placement(visible = true, transformation(origin = {30, 74}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  PlanarMechanics.Joints.Revolute revoluteLeft(useFlange = true)  annotation(
    Placement(visible = true, transformation(origin = {-56, 50}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  PlanarMechanics.Joints.Revolute revoluteRight(useFlange = true)  annotation(
    Placement(visible = true, transformation(origin = {36, 44}, extent = {{10, 10}, {-10, -10}}, rotation = -90)));
  Modelica.Mechanics.Rotational.Sources.Torque torque annotation(
    Placement(visible = true, transformation(origin = {-106, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sensors.AngleSensor angleLeft annotation(
    Placement(visible = true, transformation(origin = {-98, 70}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  SteeringControl steeringControl(i = 1000, p = 800)  annotation(
    Placement(visible = true, transformation(origin = {-144, 50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sensors.AngleSensor angleRight annotation(
    Placement(visible = true, transformation(origin = {100, 68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  SteeringControl steeringControl1(i = 1000, p = 800) annotation(
    Placement(visible = true, transformation(origin = {140, 46}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque torque1 annotation(
    Placement(visible = true, transformation(origin = {104, 46}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Step step(height = 20/180*3.14159, offset = -10/180*3.14159, startTime = 15)  annotation(
    Placement(visible = true, transformation(origin = {-186, 46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  speed = sqrt(body.v[1]^2 + body.v[2]^2);
  S = abs(body.r[1]) + abs(body.r[2]);
  R = min(speed/(body.w + 0.00000001), turnRadius*5);
  Pleft = rearLeftWheel.w_roll*torqueRearLeft.tau;
  Pright = rearRightWheel.w_roll*torqueRearRight.tau;
// Ackermann's formula
//turnRadius = body.w / body.v;
//if turnAngle < 0 then
//  leftAckermann = atan(vehicleLength / (turnRadius - vehicleWidth/2));
//  rightAckermann = atan(vehicleLength / (turnRadius + vehicleWidth/2));
//else
//  leftAckermann = atan(vehicleLength / (turnRadius + vehicleWidth/2));
//  rightAckermann = atan(vehicleLength / (turnRadius - vehicleWidth/2));
//end if;
  connect(rearLeftWheel.frame_a, rearLeft.frame_a) annotation(
    Line(points = {{-48, -48}, {-30, -48}, {-30, -50}}));
  connect(rearRightWheel.flange_a, rearRightInertia.flange_b) annotation(
    Line(points = {{68, -56}, {76, -56}}));
  connect(rearLeftInertia.flange_b, rearLeftWheel.flange_a) annotation(
    Line(points = {{-68, -50}, {-62, -50}, {-62, -48}}));
  connect(const.y, rearLeftWheel.dynamicLoad) annotation(
    Line(points = {{-111, 10}, {-77, 10}, {-77, -70}, {-52, -70}, {-52, -58}}, color = {0, 0, 127}));
  connect(const.y, rearRightWheel.dynamicLoad) annotation(
    Line(points = {{-111, 10}, {41, 10}, {41, -74}, {58, -74}, {58, -66}}, color = {0, 0, 127}));
  connect(frontLeftInertia.flange_b, frontLeftWheel.flange_a) annotation(
    Line(points = {{-102, 94}, {-86, 94}}));
  connect(frontRightWheel.flange_a, frontRightInertia.flange_b) annotation(
    Line(points = {{66, 94}, {80, 94}}));
  connect(rearRight.frame_b, rearRightWheel.frame_a) annotation(
    Line(points = {{28, -54}, {54, -54}, {54, -56}}));
  connect(rearLeft.frame_b, rearRight.frame_a) annotation(
    Line(points = {{-10, -50}, {8, -50}, {8, -54}}));
  connect(const.y, frontLeftWheel.dynamicLoad) annotation(
    Line(points = {{-110, 10}, {-110, 12}, {-76, 12}, {-76, 84}}, color = {0, 0, 127}));
  connect(const.y, frontRightWheel.dynamicLoad) annotation(
    Line(points = {{-110, 10}, {-110, 8}, {56, 8}, {56, 84}}, color = {0, 0, 127}));
  connect(rear.frame_b, front.frame_a) annotation(
    Line(points = {{-8, -6}, {-8, 14}}, color = {95, 95, 95}));
  connect(rear.frame_a, rearLeft.frame_b) annotation(
    Line(points = {{-8, -26}, {-10, -26}, {-10, -50}}));
  connect(front.frame_b, frontLeft.frame_b) annotation(
    Line(points = {{-8, 34}, {-8, 40}, {-18, 40}, {-18, 46}}, color = {95, 95, 95}));
  connect(frontRight.frame_b, frontLeft.frame_b) annotation(
    Line(points = {{2, 44}, {-7, 44}, {-7, 46}, {-18, 46}}, color = {95, 95, 95}));
  connect(body.frame_a, front.frame_a) annotation(
    Line(points = {{8, 2}, {-8, 2}, {-8, 14}}));
  connect(torqueRearRight.flange, rearRightWheel.flange_a) annotation(
    Line(points = {{120, -56}, {102, -56}, {102, -34}, {68, -34}, {68, -56}}));
  connect(torqueRearLeft.flange, rearLeftWheel.flange_a) annotation(
    Line(points = {{-114, -48}, {-102, -48}, {-102, -26}, {-60, -26}, {-60, -48}, {-62, -48}}));
  connect(const1.y, torqueRearLeft.tau) annotation(
    Line(points = {{-146, -46}, {-138, -46}, {-138, -48}, {-136, -48}}, color = {0, 0, 127}));
  connect(const2.y, torqueRearRight.tau) annotation(
    Line(points = {{152, -60}, {142, -60}, {142, -56}}, color = {0, 0, 127}));
  connect(frontLeftWheel.frame_a, frontLeftTrail.frame_b) annotation(
    Line(points = {{-72, 94}, {-54, 94}, {-54, 88}}));
  connect(leftBody.frame_a, frontLeftTrail.frame_b) annotation(
    Line(points = {{-48, 104}, {-54, 104}, {-54, 88}}, color = {95, 95, 95}));
  connect(rightBody.frame_a, frontRightTrail.frame_b) annotation(
    Line(points = {{22, 104}, {30, 104}, {30, 84}}, color = {95, 95, 95}));
  connect(frontRightWheel.frame_a, frontRightTrail.frame_b) annotation(
    Line(points = {{52, 94}, {30, 94}, {30, 84}}, color = {95, 95, 95}));
  connect(frontLeftTrail.frame_a, revoluteLeft.frame_b) annotation(
    Line(points = {{-54, 68}, {-56, 68}, {-56, 60}}, color = {95, 95, 95}));
  connect(revoluteLeft.frame_a, frontLeft.frame_a) annotation(
    Line(points = {{-56, 40}, {-38, 40}, {-38, 46}}, color = {95, 95, 95}));
  connect(frontRightTrail.frame_a, revoluteRight.frame_b) annotation(
    Line(points = {{30, 64}, {36, 64}, {36, 54}}, color = {95, 95, 95}));
  connect(revoluteRight.frame_a, frontRight.frame_a) annotation(
    Line(points = {{36, 34}, {22, 34}, {22, 44}}));
  connect(revoluteLeft.flange_a, angleLeft.flange) annotation(
    Line(points = {{-66, 50}, {-88, 50}, {-88, 70}}));
  connect(torque.flange, revoluteLeft.flange_a) annotation(
    Line(points = {{-96, 50}, {-66, 50}}));
  connect(angleLeft.phi, steeringControl.u[2]) annotation(
    Line(points = {{-108, 70}, {-156, 70}, {-156, 50}}, color = {0, 0, 127}));
  connect(steeringControl.y, torque.tau) annotation(
    Line(points = {{-132, 50}, {-118, 50}}, color = {0, 0, 127}));
  connect(revoluteRight.flange_a, angleRight.flange) annotation(
    Line(points = {{46, 44}, {41, 44}, {41, 68}, {90, 68}}));
  connect(torque.flange, revoluteRight.flange_a) annotation(
    Line(points = {{-96, 50}, {-26, 50}, {-26, 44}, {46, 44}}));
  connect(revoluteRight.flange_a, torque1.flange) annotation(
    Line(points = {{46, 44}, {94, 44}, {94, 46}}));
  connect(torque1.tau, steeringControl1.y) annotation(
    Line(points = {{116, 46}, {130, 46}}, color = {0, 0, 127}));
  connect(angleRight.phi, steeringControl1.u[2]) annotation(
    Line(points = {{112, 68}, {152, 68}, {152, 46}}, color = {0, 0, 127}));
  connect(step.y, steeringControl.u[1]) annotation(
    Line(points = {{-174, 46}, {-156, 46}, {-156, 50}}, color = {0, 0, 127}));
  connect(step.y, steeringControl1.u[1]) annotation(
    Line(points = {{-174, 46}, {152, 46}}, color = {0, 0, 127}));
  annotation(
    Placement(visible = true, transformation(origin = {16, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)),
    uses(Modelica(version = "4.0.0"), PlanarMechanics(version = "1.6.0")),
  Diagram(coordinateSystem(extent = {{-180, 140}, {180, -100}})),
  version = "");
end FourWheelVehicle2;
