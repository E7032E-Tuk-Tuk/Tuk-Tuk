model FourWheelVehicle2
  import PlanarMechanics;
  parameter Real g = 9.82 "m/s2 Gravity";
  // Wheel parameters
  parameter Real wheelRadius = 0.28 "m";
  parameter Real inertiaWheel = 0.3;
  parameter Real gearRatio = 1/8;
  parameter Real cr = 0.03 "Rolling resistance";
  // Vehicle parameters, be careful with mass center placement!
  parameter Real mass = 1300 "kg";
  parameter Real inertiaBody = 1300 "kgm2";//3.176*mass - 1754.164; // Estimation of yaw inertia for cars
  parameter Real frontLength = 1.5 "m";
  parameter Real backLength = 0.5 "m";
  parameter Real vehicleWidth = 1 "m";
  parameter Real massCenterY = backLength/(backLength + frontLength) * 100 "%";
  parameter Real massCenterZ = 0.3 "m height to COM";
  parameter Real vehicleFrontArea = 1.5 "m2, for air resistance calculation";
  parameter Real dragCoef = 0.0 "Air drag coefficient";
  // Slip parameters
  parameter Real muA = 1;
  parameter Real muS = 0.7;
  parameter Real sAd = .07;
  parameter Real sSl = .2;
  parameter Real vAd = 0.1;
  parameter Real vSl = 0.3;
  // Other
  parameter Real speedStart = 10/3.6 "m/s"; // Start speed of vehicle
  parameter Real omegaStart = speedStart/wheelRadius "rad/s";   // Start angle velocity of each wheel inertia
  Real steeringAngle "Mean ackermann steering angle";
  Real speed(start=speedStart) "m/s Car speed";
  Real S(start=0) "m Traveled length";
  Real Pleft(start=0) "W Power of left rear wheel";
  Real Pright(start=0) "W Power of right rear wheel";
  // Values in another coordinate frame
  Real[2] v_car(start={speedStart,0}) "Velocity in car frame";
  Real[2] a_car(start={speedStart,0}) "Acceleration in car frame";
  Real[2,2] Trot(start={{0, 1}, {1, 0}}) "Rotation matrix";
  Real phi_car(start=0) "Angular velocity in car frame";
  Real w_car(start=0) "Angular velocity in car frame";
  Real z_car(start=0) "Angular acceleration in car frame";
  Real effRadiusFrontLeftWheel(start=wheelRadius);
  Real effRadiusFrontRightWheel(start=wheelRadius);
  Real effRadiusRearLeftWheel(start=wheelRadius);
  Real effRadiusRearRightWheel(start=wheelRadius);
  Real[1,3] forceFrontLeftWheel;
  Real[1,3] forceFrontRightWheel;
  Real[1,3] forceRearLeftWheel;
  Real[1,3] forceRearRightWheel;
  Real slipAngleFrontLeftWheel(start=0);
  Real slipAngleFrontRightWheel(start=0);
  Real slipAngleRearLeftWheel(start=0);
  Real slipAngleRearRightWheel(start=0);
  parameter Real turnRadiusMAX = 500;
  Real turnRadiusOptimal(start=turnRadiusMAX);
  Real turnRadiusReal(start=turnRadiusMAX);
  Real debugWeghtTransfer;
  Real debugWheelInTheAir;
  // World
  inner PlanarMechanics.PlanarWorldIn3D planarWorld(constantGravity = {0, 0}) annotation(
    Placement(visible = true, transformation(origin = {-162, -80}, extent = {{-10, -10}, {10, 10}}, rotation =0)));
  // Wheels
  WheelWithSlip rearRightWheel(
    N = g*mass*(1 - massCenterY/100)*0.5, 
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
    N = g*mass*(1 - massCenterY/100)*0.5, 
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
    N = g*mass*massCenterY/100*0.5, 
    mu_A = muA, 
    mu_S = muS, 
    r = {0,1}, 
    radius = wheelRadius, 
    sAdhesion = sAd, 
    sSlide = sSl, 
    vAdhesion_min = vAd, 
    vSlide_min = vSl, 
    w_roll(start = omegaStart))  
    annotation(
    Placement(visible = true, transformation(origin = {56, 94}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  WheelWithSlip frontLeftWheel(
    N = g*mass*massCenterY/100*0.5, 
    mu_A = muA, 
    mu_S = muS, 
    r = {0,1}, 
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
  // Vehicle body
  // Test translation to body, can it have 0 length that can translate in x-direction?
  PlanarMechanics.Parts.FixedTranslation rearLeft(r = {vehicleWidth/2, 0}) annotation(
    Placement(visible = true, transformation(origin = {-20, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation rearRight(r = {vehicleWidth/2, 0}) annotation(
    Placement(visible = true, transformation(origin = {18, -54}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation rear(r = {0, backLength}) annotation(
    Placement(visible = true, transformation(origin = {-8, -16}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  PlanarMechanics.Parts.FixedTranslation front(r = {0, frontLength - wheelRadius}) annotation(
    Placement(visible = true, transformation(origin = {-8, 24}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  PlanarMechanics.Parts.FixedTranslation frontLeft(r = {vehicleWidth/2, 0})  annotation(
    Placement(visible = true, transformation(origin = {-28, 46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation frontRight(r = {-vehicleWidth/2, 0})  annotation(
    Placement(visible = true, transformation(origin = {12, 44}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.Body body(I = inertiaBody, enableGravity = false, m = mass, phi(fixed = true), r(each fixed = true), v(each fixed = true, start = {0, speedStart}), w(fixed = true)) annotation(
    Placement(visible = true, transformation(origin = {18, 2}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque torqueRearLeft annotation(
    Placement(visible = true, transformation(origin = {-168, -46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque torqueRearRight annotation(
    Placement(visible = true, transformation(origin = {172, -56}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const1(k = 10) annotation(
    Placement(visible = true, transformation(origin = {-202, -44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const2(k = 10)  annotation(
    Placement(visible = true, transformation(origin = {204, -60}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
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
  Modelica.Mechanics.Rotational.Sensors.AngleSensor angleLeft annotation(
    Placement(visible = true, transformation(origin = {-98, 70}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sensors.AngleSensor angleRight annotation(
    Placement(visible = true, transformation(origin = {100, 68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Position positionPhiLeft(exact = true)  annotation(
    Placement(visible = true, transformation(origin = {-100, 36}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Position positionPhiRight(exact = true)  annotation(
    Placement(visible = true, transformation(origin = {82, 36}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  WeightTransfer4 weightTransfer4(
    m = mass,
    h = massCenterZ,
    L = frontLength + backLength,
    Wr = vehicleWidth,
    v = v_car,
    a = a_car,
    w = w_car
    ) annotation(
    Placement(visible = true, transformation(origin = {-112, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Trapezoid trapezoid(amplitude = 8/180*3.14, falling = 4, offset = -4/180*3.14, period = 60, rising = 4, width = 22) annotation(
    Placement(visible = true, transformation(origin = {-208, 42}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.IdealGear gearRight(ratio = gearRatio) annotation(
    Placement(visible = true, transformation(origin = {124, -58}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.IdealGear gearLeft(ratio = gearRatio) annotation(
    Placement(visible = true, transformation(origin = {-114, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.VehicleComponents.AirResistanceLongitudinal airResistanceLongitudinal(area = vehicleFrontArea, c_W = dragCoef, r = {0, 1}) annotation(
    Placement(visible = true, transformation(origin = {66, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Sources.WorldForce rearLeftRollResistance annotation(
    Placement(visible = true, transformation(origin = {-54, -22}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Sources.WorldForce rearRightRollResistance annotation(
    Placement(visible = true, transformation(origin = {56, -24}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  PlanarMechanics.Sources.WorldForce frontLeftRollResistance annotation(
    Placement(visible = true, transformation(origin = {-78, 124}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Sources.WorldForce frontRightRollResistance annotation(
    Placement(visible = true, transformation(origin = {56, 128}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  AckermannSteering ackermannSteering(L=(frontLength+backLength), W=vehicleWidth) annotation(
    Placement(visible = true, transformation(origin = {-172, 42}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  speed = sqrt(body.v[1]^2 + body.v[2]^2);
  S = abs(body.r[1]) + abs(body.r[2]);
  Pleft = rearLeftWheel.w_roll*torqueRearLeft.tau;
  Pright = rearRightWheel.w_roll*torqueRearRight.tau;
  steeringAngle = (positionPhiLeft.phi + positionPhiRight.phi)/2;
// Car frame equations
  Trot = [-sin(body.phi), cos(body.phi); cos(body.phi), sin(body.phi)];
  v_car = Trot*body.v;
  a_car = Trot*body.a;
  phi_car = -body.phi;
  w_car = -body.w;
  z_car = -body.z;
// Effective radius ?
  effRadiusFrontLeftWheel = frontLeftWheel.v_long/frontLeftWheel.w_roll;
  effRadiusFrontRightWheel = frontRightWheel.v_long/frontRightWheel.w_roll;
  effRadiusRearLeftWheel = rearLeftWheel.v_long/rearLeftWheel.w_roll;
  effRadiusRearRightWheel = rearRightWheel.v_long/rearRightWheel.w_roll;
// Forces on the wheels in car coordinate frame
  forceFrontLeftWheel = [frontLeftWheel.f_long, frontLeftWheel.f_lat, frontLeftWheel.fN];
  forceFrontRightWheel = [frontRightWheel.f_long, frontRightWheel.f_lat, frontRightWheel.fN];
  forceRearLeftWheel = [rearLeftWheel.f_long, rearLeftWheel.f_lat, rearLeftWheel.fN];
  forceRearRightWheel = [rearRightWheel.f_long, rearRightWheel.f_lat, rearRightWheel.fN];
// Slip angle for each wheel
  slipAngleFrontLeftWheel = atan(frontLeftWheel.v_lat/frontLeftWheel.v_long);
  slipAngleFrontRightWheel = atan(frontRightWheel.v_lat/frontRightWheel.v_long);
  slipAngleRearLeftWheel = atan(rearLeftWheel.v_lat/rearLeftWheel.v_long);
  slipAngleRearRightWheel = atan(rearRightWheel.v_lat/rearRightWheel.v_long);
// Turning radius
  turnRadiusOptimal = min(sqrt(backLength^2 + (backLength + frontLength)^2/(tan(steeringAngle)^2 + 0.000000001)), turnRadiusMAX);
  turnRadiusReal = min(sqrt(speed^2/(body.w^2 + 0.000000001)), turnRadiusMAX);
// Debug
  debugWeghtTransfer = (weightTransfer4.y[1] + weightTransfer4.y[2] + weightTransfer4.y[3] + weightTransfer4.y[4]);
  debugWheelInTheAir = frontLeftWheel.fN + frontRightWheel.fN + rearLeftWheel.fN + rearRightWheel.fN - mass*g;
  connect(rearLeftWheel.frame_a, rearLeft.frame_a) annotation(
    Line(points = {{-48, -48}, {-30, -48}, {-30, -50}}));
  connect(rearRightWheel.flange_a, rearRightInertia.flange_b) annotation(
    Line(points = {{68, -56}, {76, -56}}));
  connect(rearLeftInertia.flange_b, rearLeftWheel.flange_a) annotation(
    Line(points = {{-68, -50}, {-62, -50}, {-62, -48}}));
  connect(frontLeftInertia.flange_b, frontLeftWheel.flange_a) annotation(
    Line(points = {{-102, 94}, {-86, 94}}));
  connect(frontRightWheel.flange_a, frontRightInertia.flange_b) annotation(
    Line(points = {{66, 94}, {80, 94}}));
  connect(rearRight.frame_b, rearRightWheel.frame_a) annotation(
    Line(points = {{28, -54}, {54, -54}, {54, -56}}));
  connect(rearLeft.frame_b, rearRight.frame_a) annotation(
    Line(points = {{-10, -50}, {8, -50}, {8, -54}}));
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
  connect(const1.y, torqueRearLeft.tau) annotation(
    Line(points = {{-191, -44}, {-183, -44}, {-183, -46}, {-181, -46}}, color = {0, 0, 127}));
  connect(const2.y, torqueRearRight.tau) annotation(
    Line(points = {{193, -60}, {183, -60}, {183, -56}}, color = {0, 0, 127}));
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
  connect(revoluteRight.flange_a, angleRight.flange) annotation(
    Line(points = {{46, 44}, {41, 44}, {41, 68}, {90, 68}}));
  connect(positionPhiLeft.flange, revoluteLeft.flange_a) annotation(
    Line(points = {{-90, 36}, {-66, 36}, {-66, 50}}));
  connect(positionPhiRight.flange, revoluteRight.flange_a) annotation(
    Line(points = {{72, 36}, {46, 36}, {46, 44}}));
  connect(frontLeftWheel.dynamicLoad, weightTransfer4.y[1]) annotation(
    Line(points = {{-76, 84}, {-76, 0}, {-100, 0}}, color = {0, 0, 127}));
  connect(frontRightWheel.dynamicLoad, weightTransfer4.y[2]) annotation(
    Line(points = {{56, 84}, {54, 84}, {54, 10}, {-58, 10}, {-58, 0}, {-100, 0}}, color = {0, 0, 127}));
  connect(rearLeftWheel.dynamicLoad, weightTransfer4.y[3]) annotation(
    Line(points = {{-52, -58}, {-38, -58}, {-38, 0}, {-100, 0}}, color = {0, 0, 127}));
  connect(rearRightWheel.dynamicLoad, weightTransfer4.y[4]) annotation(
    Line(points = {{58, -66}, {38, -66}, {38, -30}, {-38, -30}, {-38, 0}, {-100, 0}}, color = {0, 0, 127}));
  connect(torqueRearLeft.flange, gearLeft.flange_a) annotation(
    Line(points = {{-158, -46}, {-124, -46}, {-124, -50}}));
  connect(gearLeft.flange_b, rearLeftInertia.flange_a) annotation(
    Line(points = {{-104, -50}, {-88, -50}}));
  connect(gearRight.flange_b, rearRightInertia.flange_a) annotation(
    Line(points = {{114, -58}, {96, -58}, {96, -56}}));
  connect(torqueRearRight.flange, gearRight.flange_a) annotation(
    Line(points = {{162, -56}, {134, -56}, {134, -58}}));
  connect(airResistanceLongitudinal.frame_a, body.frame_a) annotation(
    Line(points = {{56, 0}, {38, 0}, {38, 18}, {8, 18}, {8, 2}}, color = {95, 95, 95}));
  connect(rearLeftRollResistance.force, rearLeftWheel.outRollForce) annotation(
    Line(points = {{-66, -22}, {-62, -22}, {-62, -56}}, color = {0, 0, 127}, thickness = 0.5));
  connect(rearLeftRollResistance.frame_b, rearLeftWheel.frame_a) annotation(
    Line(points = {{-44, -22}, {-48, -22}, {-48, -48}}, color = {95, 95, 95}));
  connect(rearRightWheel.outRollForce, rearRightRollResistance.force) annotation(
    Line(points = {{68, -64}, {68, -24}}, color = {0, 0, 127}, thickness = 0.5));
  connect(rearRightRollResistance.frame_b, rearRightWheel.frame_a) annotation(
    Line(points = {{46, -24}, {54, -24}, {54, -56}}, color = {95, 95, 95}));
  connect(frontLeftWheel.outRollForce, frontLeftRollResistance.force) annotation(
    Line(points = {{-86, 86}, {-90, 86}, {-90, 124}}, color = {0, 0, 127}, thickness = 0.5));
  connect(frontLeftRollResistance.frame_b, frontLeftWheel.frame_a) annotation(
    Line(points = {{-68, 124}, {-72, 124}, {-72, 94}}, color = {95, 95, 95}));
  connect(frontRightWheel.outRollForce, frontRightRollResistance.force) annotation(
    Line(points = {{66, 86}, {68, 86}, {68, 128}}, color = {0, 0, 127}, thickness = 0.5));
  connect(frontRightRollResistance.frame_b, frontRightWheel.frame_a) annotation(
    Line(points = {{46, 128}, {52, 128}, {52, 94}}, color = {95, 95, 95}));
  connect(trapezoid.y, ackermannSteering.u) annotation(
    Line(points = {{-196, 42}, {-184, 42}}, color = {0, 0, 127}));
  connect(positionPhiLeft.phi_ref, ackermannSteering.y[1]) annotation(
    Line(points = {{-112, 36}, {-160, 36}, {-160, 42}}, color = {0, 0, 127}));
  connect(positionPhiRight.phi_ref, ackermannSteering.y[2]) annotation(
    Line(points = {{94, 36}, {96, 36}, {96, 22}, {-160, 22}, {-160, 42}}, color = {0, 0, 127}));
  annotation(
    Placement(visible = true, transformation(origin = {16, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)),
    uses(Modelica(version = "4.0.0"), PlanarMechanics(version = "1.6.0")),
  Diagram(coordinateSystem(extent = {{-180, 140}, {180, -100}})),
  version = "");
end FourWheelVehicle2;
