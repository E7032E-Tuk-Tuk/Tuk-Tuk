model FourWheelVehicle
  import PlanarMechanics;
  parameter Real g = 9.82 "m/s2 Gravity";
  // Wheel parameters
  parameter Real wheelRadius = 0.12 "m";
  parameter Real inertiaWheel = 1;
  parameter Real turnAngle = -20;
  // Vehicle parameters, be careful with mass center placement!
  parameter Real inertiaBody = 0.1;
  parameter Real mass = 1000 "kg";
  parameter Real vehicleLength = 3 "m";
  parameter Real vehicleWidth = 2 "m";
  parameter Real massCenterX = 50 "Percentage of vehicle width, 0 - left, 100 - right";
  parameter Real massCenterY = 40 "Percentage of vehicle length, 0 - rear, 100 - front";
  // Slip parameters
  parameter Real muA = 1;
  parameter Real muS = 0.7;
  parameter Real sAd = .07;
  parameter Real sSl = .2;
  parameter Real vAd = 0.1;
  parameter Real vSl = 0.3;
  // Other
  parameter Real turnRadius = 10 "m";
  parameter Real leftAckermann = -atan(vehicleLength / (turnRadius - vehicleWidth/2));
  parameter Real rightAckermann = -atan(vehicleLength / (turnRadius + vehicleWidth/2));
  parameter Real omegaStart = 20;
  // World
  inner PlanarMechanics.PlanarWorldIn3D planarWorld(
    constantGravity = {0, -g}) 
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
    r = {0,1}, 
    radius = wheelRadius, 
    sAdhesion = sAd, 
    sSlide = sSl, 
    vAdhesion_min = vAd, 
    vSlide_min = vSl, 
    w_roll(start = omegaStart))  
    annotation(
    Placement(visible = true, transformation(origin = {58, 112}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  WheelWithSlip frontLeftWheel(
    N = g*mass*massCenterY/100*(1 - massCenterX/100), 
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
    Placement(visible = true, transformation(origin = {-72, 110}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));

  Modelica.Mechanics.Rotational.Components.Inertia rearLeftInertia(
    J = inertiaWheel, 
    phi(fixed = true, start = 0), 
    w(fixed = true, start = 0)) 
    annotation(
    Placement(visible = true, transformation(origin = {-78, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia rearRightInertia(
    J = inertiaWheel, 
    phi(fixed = true, start = 0), 
    w(fixed = true, start = 0)) 
    annotation(
    Placement(visible = true, transformation(origin = {86, -56}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia frontLeftInertia(
    J = inertiaWheel, 
    phi(fixed = true, start = 0), 
    w(fixed = true, start = 0))  
    annotation(
    Placement(visible = true, transformation(origin = {-108, 110}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia frontRightInertia(
    J = inertiaWheel, 
    phi(fixed = true, start = 0), 
    w(fixed = true, start = 0))  
    annotation(
    Placement(visible = true, transformation(origin = {92, 112}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));

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
  PlanarMechanics.Parts.FixedTranslation front(r = {0, vehicleLength*(1 - massCenterY/100) - wheelRadius}) annotation(
    Placement(visible = true, transformation(origin = {-8, 24}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  PlanarMechanics.Parts.FixedTranslation frontLeft(r = {vehicleWidth/2, 0})  annotation(
    Placement(visible = true, transformation(origin = {-26, 44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation frontRight(r = {-vehicleWidth/2, 0})  annotation(
    Placement(visible = true, transformation(origin = {14, 42}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.Body body(I = inertiaBody, enableGravity = false, m = mass, phi(fixed = true), r(each fixed = true), v(each fixed = true, start = {0, 0}), w(fixed = true)) annotation(
    Placement(visible = true, transformation(origin = {18, 2}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Joints.Revolute revoluteLeft(phi(displayUnit = "rad", fixed = true, start = 0), useFlange = true)  annotation(
    Placement(visible = true, transformation(origin = {-42, 64}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  PlanarMechanics.Joints.Revolute revoluteRight(phi(displayUnit = "rad", fixed = true, start = 0), useFlange = true)  annotation(
    Placement(visible = true, transformation(origin = {30, 66}, extent = {{10, -10}, {-10, 10}}, rotation = 90)));
  PlanarMechanics.Parts.FixedTranslation frontLeftTrail(r = {0, -wheelRadius}) annotation(
    Placement(visible = true, transformation(origin = {-42, 90}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  PlanarMechanics.Parts.FixedTranslation frontRightTrail(r = {0, -wheelRadius}) annotation(
    Placement(visible = true, transformation(origin = {30, 96}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  Modelica.Mechanics.Rotational.Sources.Torque torqueRearLeft annotation(
    Placement(visible = true, transformation(origin = {-124, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque torqueRearRight annotation(
    Placement(visible = true, transformation(origin = {130, -56}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const1(k = 5)  annotation(
    Placement(visible = true, transformation(origin = {-162, -46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PID pid(I = 5, P = 100, setpoint = -20, signal = revoluteLeft.phi)  annotation(
    Placement(visible = true, transformation(origin = {-128, 68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque torque annotation(
    Placement(visible = true, transformation(origin = {-90, 68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PID pid1(I = 5, P = 100, setpoint = -20, signal = revoluteRight.phi) annotation(
    Placement(visible = true, transformation(origin = {132, 68}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque torque1 annotation(
    Placement(visible = true, transformation(origin = {98, 66}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
equation
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
    Line(points = {{-98, 110}, {-82, 110}}));
  connect(frontRightWheel.flange_a, frontRightInertia.flange_b) annotation(
    Line(points = {{68, 112}, {82, 112}}));
  connect(rearRight.frame_b, rearRightWheel.frame_a) annotation(
    Line(points = {{28, -54}, {54, -54}, {54, -56}}));
  connect(rearLeft.frame_b, rearRight.frame_a) annotation(
    Line(points = {{-10, -50}, {8, -50}, {8, -54}}));
  connect(const.y, frontLeftWheel.dynamicLoad) annotation(
    Line(points = {{-110, 10}, {-54, 10}, {-54, 100}, {-72, 100}}, color = {0, 0, 127}));
  connect(const.y, frontRightWheel.dynamicLoad) annotation(
    Line(points = {{-110, 10}, {58, 10}, {58, 102}}, color = {0, 0, 127}));
  connect(frontLeftWheel.frame_a, frontLeftTrail.frame_b) annotation(
    Line(points = {{-68, 110}, {-42, 110}, {-42, 100}}, color = {95, 95, 95}));
  connect(frontRightTrail.frame_b, frontRightWheel.frame_a) annotation(
    Line(points = {{30, 106}, {30, 112}, {54, 112}}, color = {95, 95, 95}));
  connect(rear.frame_b, front.frame_a) annotation(
    Line(points = {{-8, -6}, {-8, 14}}, color = {95, 95, 95}));
  connect(rear.frame_a, rearLeft.frame_b) annotation(
    Line(points = {{-8, -26}, {-10, -26}, {-10, -50}}));
  connect(front.frame_b, frontLeft.frame_b) annotation(
    Line(points = {{-8, 34}, {-16, 34}, {-16, 44}}, color = {95, 95, 95}));
  connect(frontRight.frame_b, frontLeft.frame_b) annotation(
    Line(points = {{4, 42}, {-5, 42}, {-5, 44}, {-16, 44}}, color = {95, 95, 95}));
  connect(frontLeft.frame_a, revoluteLeft.frame_b) annotation(
    Line(points = {{-36, 44}, {-42, 44}, {-42, 54}}, color = {95, 95, 95}));
  connect(frontRight.frame_a, revoluteRight.frame_b) annotation(
    Line(points = {{24, 42}, {30, 42}, {30, 56}}));
  connect(revoluteLeft.frame_a, frontLeftTrail.frame_a) annotation(
    Line(points = {{-42, 74}, {-42, 80}}, color = {95, 95, 95}));
  connect(revoluteRight.frame_a, frontRightTrail.frame_a) annotation(
    Line(points = {{30, 76}, {30, 86}}, color = {95, 95, 95}));
  connect(body.frame_a, front.frame_a) annotation(
    Line(points = {{8, 2}, {-8, 2}, {-8, 14}}));
  connect(torqueRearLeft.flange, rearLeftWheel.flange_a) annotation(
    Line(points = {{-114, -48}, {-102, -48}, {-102, -26}, {-60, -26}, {-60, -48}, {-62, -48}}));
  connect(torqueRearRight.flange, rearRightWheel.flange_a) annotation(
    Line(points = {{120, -56}, {102, -56}, {102, -34}, {68, -34}, {68, -56}}));
  connect(const1.y, torqueRearLeft.tau) annotation(
    Line(points = {{-150, -46}, {-136, -46}, {-136, -48}}, color = {0, 0, 127}));
  connect(const1.y, torqueRearRight.tau) annotation(
    Line(points = {{-150, -46}, {-144, -46}, {-144, -78}, {142, -78}, {142, -56}}, color = {0, 0, 127}));
  connect(pid.y, torque.tau) annotation(
    Line(points = {{-116, 68}, {-102, 68}}, color = {0, 0, 127}));
  connect(torque.flange, revoluteLeft.flange_a) annotation(
    Line(points = {{-80, 68}, {-52, 68}, {-52, 64}}));
  connect(pid1.y, torque1.tau) annotation(
    Line(points = {{121, 68}, {115.5, 68}, {115.5, 66}, {110, 66}}, color = {0, 0, 127}));
  connect(revoluteRight.flange_a, torque1.flange) annotation(
    Line(points = {{40, 66}, {88, 66}}));
  annotation(
    Placement(visible = true, transformation(origin = {16, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)),
    uses(Modelica(version = "4.0.0"), PlanarMechanics(version = "1.6.0")),
  Diagram(coordinateSystem(extent = {{-180, 140}, {180, -100}})),
  version = "");
end FourWheelVehicle;
