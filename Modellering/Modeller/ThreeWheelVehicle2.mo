model ThreeWheelVehicle2
  import PlanarMechanics;
  parameter Real g = 9.82 "m/s2 Gravity";
  // Wheel parameters
  parameter Real wheelRadius = 0.28 "m";
  parameter Real inertiaWheel = 0.3;
  parameter Real gearRatio = 1/8;
  // Vehicle parameters, be careful with mass center placement!
  parameter Real mass = 350 "kg";
  parameter Real inertiaBody = 350 "kgm2";
  //3.176*mass - 1754.164; // Estimation of yaw inertia for cars
  parameter Real frontLength = 1.5 "m";
  parameter Real backLength = 0.5 "m";
  parameter Real vehicleWidth = 1 "m";
  parameter Real massCenterY = backLength/(backLength + frontLength) * 100 "%";
  // Slip parameters
  parameter Real muA = 1;
  parameter Real muS = 0.7;
  parameter Real sAd = .07;
  parameter Real sSl = .2;
  parameter Real vAd = 0.1;
  parameter Real vSl = 0.3;
  // Other
  parameter Real speedStart = 10/3.6 "m/s";
  parameter Real omegaStart = speedStart/wheelRadius "rad/s";
  // Calculated values
  Real speed(start = speedStart) "m/s Car speed";
  Real S(start = 0) "m Traveled length";
  Real R(start = 100) "m Radius of turning";
  Real Pleft(start = 0) "W Power of left rear wheel";
  Real Pright(start = 0) "W Power of right rear wheel";
  // Values in another coordinate frame
  Real vx(start=speedStart) "m/s car front direction";
  Real vy(start=0) "m/s car right";
  // Force vectors on each wheel
  // yaw
  // wheel effective radius
  // World
  inner PlanarMechanics.PlanarWorldIn3D planarWorld(constantGravity = {0, 0}) annotation(
    Placement(visible = true, transformation(origin = {-158, 114}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
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
    w_roll(start = omegaStart)) annotation(
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
    w_roll(start = omegaStart)) annotation(
    Placement(visible = true, transformation(origin = {-52, -48}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  WheelWithSlip frontWheel(
    N = g*mass*massCenterY/100, 
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
    Placement(visible = true, transformation(origin = {-138, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia rearRightInertia(
    J = inertiaWheel, 
    phi(fixed = true, start = 0), 
    w(fixed = true, start = omegaStart)) annotation(
    Placement(visible = true, transformation(origin = {144, -58}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia frontInertia(
    J = inertiaWheel, 
    phi(fixed = true, start = 0), 
    w(fixed = true, start = omegaStart)) annotation(
    Placement(visible = true, transformation(origin = {-34, 120}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0) annotation(
    Placement(visible = true, transformation(origin = {-120, 8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque torqueRearLeft annotation(
    Placement(visible = true, transformation(origin = {-128, -24}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque torqueRearRight annotation(
    Placement(visible = true, transformation(origin = {124, -14}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.IdealGear gearLeft(ratio = gearRatio)  annotation(
    Placement(visible = true, transformation(origin = {-98, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.IdealGear gearRight(ratio = gearRatio)  annotation(
    Placement(visible = true, transformation(origin = {102, -58}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));

  // Vehicle body
  // Test translation to body, can it have 0 length that can translate in x-direction?
  PlanarMechanics.Parts.FixedTranslation rearLeft(r = {vehicleWidth/2, 0}) annotation(
    Placement(visible = true, transformation(origin = {-20, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation rearRight(r = {vehicleWidth/2, 0}) annotation(
    Placement(visible = true, transformation(origin = {18, -54}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation rear(
    r = {0, backLength}) annotation(
    Placement(visible = true, transformation(origin = {-8, -16}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  PlanarMechanics.Parts.FixedTranslation front(
    r = {0, frontLength - wheelRadius/5}) annotation(
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
    Placement(visible = true, transformation(origin = {18, -6}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation frontTrail(r = {0, -wheelRadius/5}) annotation(
    Placement(visible = true, transformation(origin = {10, 90}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
  PlanarMechanics.Parts.Body body2(I = .00000001, enableGravity = false, m = .1) annotation(
    Placement(visible = true, transformation(origin = {40, 130}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Joints.Revolute revolute(useFlange = true) annotation(
    Placement(visible = true, transformation(origin = {8, 60}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  Modelica.Mechanics.Rotational.Sources.Torque torque annotation(
    Placement(visible = true, transformation(origin = {-30, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sensors.AngleSensor angleSensor annotation(
    Placement(visible = true, transformation(origin = {-44, 90}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  SteeringControl steeringControl(i = 900, p = 800) annotation(
    Placement(visible = true, transformation(origin = {-86, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation front2(r = {0.001, 0}) annotation(
    Placement(visible = true, transformation(origin = {12, 38}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));

  // Signal sources
  Modelica.Blocks.Sources.Constant const1(k = 10) annotation(
    Placement(visible = true, transformation(origin = {-164, -24}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const2(k = 10) annotation(
    Placement(visible = true, transformation(origin = {156, -18}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Sine sine(amplitude = 25/180*3.14159, f = 0.05)  annotation(
    Placement(visible = true, transformation(origin = {-136, 54}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  
equation
  speed = sqrt(body.v[1]^2 + body.v[2]^2);
  S = abs(body.r[1]) + abs(body.r[2]);
  R = min(speed/(body.w + 0.00000001), 1000);
  Pleft = rearLeftWheel.w_roll*torqueRearLeft.tau;
  Pright = rearRightWheel.w_roll*torqueRearRight.tau;
  
  // Velocity car frame x - front, y - right
  
  
  connect(rearLeftWheel.frame_a, rearLeft.frame_a) annotation(
    Line(points = {{-48, -48}, {-30, -48}, {-30, -50}}));
  connect(const.y, rearLeftWheel.dynamicLoad) annotation(
    Line(points = {{-109, 8}, {-77, 8}, {-77, -70}, {-52, -70}, {-52, -58}}, color = {0, 0, 127}));
  connect(const.y, rearRightWheel.dynamicLoad) annotation(
    Line(points = {{-109, 8}, {41, 8}, {41, -74}, {58, -74}, {58, -66}}, color = {0, 0, 127}));
  connect(frontInertia.flange_b, frontWheel.flange_a) annotation(
    Line(points = {{-24, 120}, {-8, 120}}));
  connect(rearRight.frame_b, rearRightWheel.frame_a) annotation(
    Line(points = {{28, -54}, {54, -54}, {54, -56}}));
  connect(rearLeft.frame_b, rearRight.frame_a) annotation(
    Line(points = {{-10, -50}, {8, -50}, {8, -54}}));
  connect(const.y, frontWheel.dynamicLoad) annotation(
    Line(points = {{-109, 8}, {2, 8}, {2, 110}}, color = {0, 0, 127}));
  connect(rear.frame_b, front.frame_a) annotation(
    Line(points = {{-8, -6}, {-8, 14}}, color = {95, 95, 95}));
  connect(rear.frame_a, rearLeft.frame_b) annotation(
    Line(points = {{-8, -26}, {-10, -26}, {-10, -50}}));
  connect(const1.y, torqueRearLeft.tau) annotation(
    Line(points = {{-153, -24}, {-140, -24}}, color = {0, 0, 127}));
  connect(const2.y, torqueRearRight.tau) annotation(
    Line(points = {{145, -18}, {135, -18}, {135, -14}}, color = {0, 0, 127}));
  connect(frontWheel.frame_a, frontTrail.frame_b) annotation(
    Line(points = {{6, 120}, {10, 120}, {10, 100}}));
  connect(body2.frame_a, frontTrail.frame_b) annotation(
    Line(points = {{30, 130}, {10, 130}, {10, 100}}, color = {95, 95, 95}));
  connect(frontTrail.frame_a, revolute.frame_b) annotation(
    Line(points = {{10, 80}, {8, 80}, {8, 70}}, color = {95, 95, 95}));
  connect(revolute.flange_a, angleSensor.flange) annotation(
    Line(points = {{-2, 60}, {-2, 90}, {-34, 90}}));
  connect(torque.flange, revolute.flange_a) annotation(
    Line(points = {{-20, 60}, {-2, 60}}));
  connect(angleSensor.phi, steeringControl.u[2]) annotation(
    Line(points = {{-55, 90}, {-102.5, 90}, {-102.5, 60}, {-98, 60}}, color = {0, 0, 127}));
  connect(steeringControl.y, torque.tau) annotation(
    Line(points = {{-75, 60}, {-42, 60}}, color = {0, 0, 127}));
  connect(body.frame_a, front.frame_a) annotation(
    Line(points = {{8, -6}, {8, 6}, {-8, 6}, {-8, 16}}));
  connect(revolute.frame_a, front2.frame_a) annotation(
    Line(points = {{8, 50}, {8, 42}, {22, 42}, {22, 38}}, color = {95, 95, 95}));
  connect(front.frame_b, front2.frame_b) annotation(
    Line(points = {{-8, 34}, {-8, 40}, {2, 40}, {2, 38}}, color = {95, 95, 95}));
  connect(sine.y, steeringControl.u[1]) annotation(
    Line(points = {{-124, 54}, {-98, 54}, {-98, 60}}, color = {0, 0, 127}));
  connect(rearRightWheel.flange_a, gearRight.flange_b) annotation(
    Line(points = {{68, -56}, {92, -56}, {92, -58}}));
  connect(gearRight.flange_a, rearRightInertia.flange_b) annotation(
    Line(points = {{112, -58}, {134, -58}}));
  connect(torqueRearRight.flange, gearRight.flange_a) annotation(
    Line(points = {{114, -14}, {112, -14}, {112, -58}}));
  connect(gearLeft.flange_b, rearLeftWheel.flange_a) annotation(
    Line(points = {{-88, -48}, {-62, -48}}));
  connect(rearLeftInertia.flange_b, gearLeft.flange_a) annotation(
    Line(points = {{-128, -48}, {-108, -48}}));
  connect(torqueRearLeft.flange, gearLeft.flange_a) annotation(
    Line(points = {{-118, -24}, {-108, -24}, {-108, -48}}));
  annotation(
    Placement(visible = true, transformation(origin = {16, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)),
    uses(Modelica(version = "4.0.0"), PlanarMechanics(version = "1.6.0")),
    Diagram(coordinateSystem(extent = {{-180, 140}, {180, -100}})),
    version = "");
end ThreeWheelVehicle2;
