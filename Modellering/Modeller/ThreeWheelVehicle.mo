model ThreeWheelVehicle2
  import PlanarMechanics;
  parameter Real g = 9.82 "m/s2 Gravity";
  // Wheel parameters
  parameter Real wheelRadius = 0.28 "m";
  parameter Real inertiaWheel = 0.2;
  parameter Real gearRatio = 1/8;
  parameter Real cr = 0.03 "Rolling resistance";
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
  parameter Real dragCoef = 0.0 "Air drag coefficient";
  // Slip parameters
  parameter Real muA = 1;
  parameter Real muS = 0.7;
  parameter Real sAd = .07;
  parameter Real sSl = .2;
  parameter Real vAd = 0.1;
  parameter Real vSl = 0.3;
  // Other
  parameter Real speedStart = 50/3.6 "m/s";
  parameter Real omegaStart = speedStart/wheelRadius "rad/s";
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
  Real effRadiusFrontWheel(start=wheelRadius);
  Real effRadiusRearLeftWheel(start=wheelRadius);
  Real effRadiusRearRightWheel(start=wheelRadius);
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
    Placement(visible = true, transformation(origin = {-174, 116}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  // Wheels
  WheelWithSlip rearRightWheel(
    N = g*mass*(1 - massCenterY/100)*0.5, 
    cr = cr, 
    mu_A = muA, 
    mu_S = muS, 
    r = {0, 1}, 
    radius = wheelRadius, 
    sAdhesion = sAd, 
    sSlide = sSl, 
    vAdhesion_min = vAd, 
    vSlide_min = vSl, 
    w_roll(start = omegaStart)) annotation(
    Placement(visible = true, transformation(origin = {58, -56}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  WheelWithSlip rearLeftWheel(
    N = g*mass*(1 - massCenterY/100)*0.5, 
    cr = cr, 
    mu_A = muA, 
    mu_S = muS, 
    r = {0, 1}, 
    radius = wheelRadius, 
    sAdhesion = sAd, 
    sSlide = sSl, 
    vAdhesion_min = vAd, 
    vSlide_min = vSl, 
    w_roll(start = omegaStart)) annotation(
    Placement(visible = true, transformation(origin = {-52, -48}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  WheelWithSlip frontWheel(
    N = g*mass*massCenterY/100, 
    cr = cr, 
    mu_A = muA, 
    mu_S = muS, 
    r = {0, 1}, 
    radius = wheelRadius, 
    sAdhesion = sAd, 
    sSlide = sSl, 
    vAdhesion_min = vAd, 
    vSlide_min = vSl, 
    w_roll(start = omegaStart)) annotation(
    Placement(visible = true, transformation(origin = {2, 120}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia rearLeftInertia(
    J = inertiaWheel, 
    phi(fixed = true, start = 0), 
    w(fixed = true, start = omegaStart)) annotation(
    Placement(visible = true, transformation(origin = {-96, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia rearRightInertia(
    J = inertiaWheel, 
    phi(fixed = true, start = 0), 
    w(fixed = true, start = omegaStart)) annotation(
    Placement(visible = true, transformation(origin = {90, -56}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia frontInertia(
    J = inertiaWheel, 
    phi(fixed = true, start = 0), 
    w(fixed = true, start = omegaStart)) annotation(
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
    color = {0, 255, 0}, r = {0, frontLength - wheelRadius/5}, width = .2) annotation(
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
  PlanarMechanics.Parts.FixedTranslation frontTrail(r = {0, -wheelRadius/5}) annotation(
    Placement(visible = true, transformation(origin = {10, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  PlanarMechanics.Parts.Body body2(I = 0.00000001, enableGravity = false, m = .1) annotation(
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
    Placement(visible = true, transformation(origin = {-162, 28}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Real debugWeghtTransfer;
  Real debugWheelInTheAir;
  // Signal sources
  Modelica.Mechanics.Rotational.Sources.Position position(exact = true)  annotation(
    Placement(visible = true, transformation(origin = {-48, 54}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 70)  annotation(
    Placement(visible = true, transformation(origin = {-204, -30}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  SineWithDwell sineWithDwell(amplitude = .05, f = 0.7)  annotation(
    Placement(visible = true, transformation(origin = {-96, 54}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque rearLeftRollResistance annotation(
    Placement(visible = true, transformation(origin = {-66, -18}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque rearRightRollingResistance annotation(
    Placement(visible = true, transformation(origin = {60, -16}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque frontRollingResistance annotation(
    Placement(visible = true, transformation(origin = {-6, 154}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
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
// Debug
  debugWeghtTransfer = (weightTransfer.y[1] + weightTransfer.y[2] + weightTransfer.y[3]);
  debugWheelInTheAir = frontWheel.fN + rearLeftWheel.fN + rearRightWheel.fN - mass*g;
  connect(rearLeftWheel.frame_a, rearLeft.frame_a) annotation(
    Line(points = {{-48, -48}, {-30, -48}, {-30, -50}}));
  connect(frontInertia.flange_b, frontWheel.flange_a) annotation(
    Line(points = {{-24, 120}, {-8, 120}}));
  connect(rearRight.frame_b, rearRightWheel.frame_a) annotation(
    Line(points = {{28, -54}, {54, -54}, {54, -56}}));
  connect(rearLeft.frame_b, rearRight.frame_a) annotation(
    Line(points = {{-10, -50}, {8, -50}, {8, -54}}));
  connect(rear.frame_b, front.frame_a) annotation(
    Line(points = {{-8, -6}, {-8, 14}}, color = {95, 95, 95}));
  connect(rear.frame_a, rearLeft.frame_b) annotation(
    Line(points = {{-8, -26}, {-10, -26}, {-10, -50}}));
  connect(frontWheel.frame_a, frontTrail.frame_b) annotation(
    Line(points = {{6, 120}, {10, 120}, {10, 100}}));
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
  connect(position.flange, revolute.flange_a) annotation(
    Line(points = {{-38, 54}, {-2, 54}, {-2, 60}}));
  connect(frontWheel.dynamicLoad, weightTransfer.y[1]) annotation(
    Line(points = {{2, 110}, {-150, 110}, {-150, 28}}, color = {0, 0, 127}));
  connect(rearLeftWheel.dynamicLoad, weightTransfer.y[2]) annotation(
    Line(points = {{-52, -58}, {-150, -58}, {-150, 28}}, color = {0, 0, 127}));
  connect(rearRightWheel.dynamicLoad, weightTransfer.y[3]) annotation(
    Line(points = {{58, -66}, {-150, -66}, {-150, 28}}, color = {0, 0, 127}));
  connect(const.y, torqueRearLeft.tau) annotation(
    Line(points = {{-192, -30}, {-174, -30}, {-174, -22}}, color = {0, 0, 127}));
  connect(const.y, torqueRearRight.tau) annotation(
    Line(points = {{-192, -30}, {-182, -30}, {-182, -74}, {172, -74}, {172, -10}}, color = {0, 0, 127}));
  connect(sineWithDwell.y, position.phi_ref) annotation(
    Line(points = {{-84, 54}, {-60, 54}}, color = {0, 0, 127}));
  connect(rearLeftWheel.outRollTorque, rearLeftRollResistance.tau) annotation(
    Line(points = {{-62, -56}, {-78, -56}, {-78, -18}}, color = {0, 0, 127}));
  connect(rearLeftRollResistance.flange, rearLeftWheel.flange_a) annotation(
    Line(points = {{-56, -18}, {-62, -18}, {-62, -48}}));
  connect(rearRightWheel.outRollTorque, rearRightRollingResistance.tau) annotation(
    Line(points = {{68, -64}, {72, -64}, {72, -16}}, color = {0, 0, 127}));
  connect(rearRightRollingResistance.flange, rearRightWheel.flange_a) annotation(
    Line(points = {{50, -16}, {50, -37}, {68, -37}, {68, -56}}));
  connect(frontWheel.outRollTorque, frontRollingResistance.tau) annotation(
    Line(points = {{-8, 112}, {-18, 112}, {-18, 154}}, color = {0, 0, 127}));
  connect(frontRollingResistance.flange, frontWheel.flange_a) annotation(
    Line(points = {{4, 154}, {-8, 154}, {-8, 120}}));
  annotation(
    Placement(visible = true, transformation(origin = {16, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)),
    uses(Modelica(version = "4.0.0"), PlanarMechanics(version = "1.6.0")),
    Diagram(coordinateSystem(extent = {{-220, 160}, {220, -80}})),
    version = "");
end ThreeWheelVehicle2;
