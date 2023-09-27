model ThreeWheelVehicle
  import PlanarMechanics;
  parameter Real g = 9.82 "m/s2 Gravity";
  // Wheel parameters
  parameter Real wheelRadius = 0.12 "m";
  parameter Real inertiaWheel = 1;
  // Vehicle parameters, be careful with mass center placement!
  parameter Real inertiaBody = 0.01;
  parameter Real mass = 1000 "kg";
  parameter Real vehicleLength = 3 "m";
  parameter Real vehicleWidth = 2 "m";
  parameter Real massCenterX = 50 "Percentage of vehicle width, 0 - left, 100 - right";
  parameter Real massCenterY = 40 "Percentage of vehicle length, 0 - rear, 100 - front";
  // Slip parameters
  parameter Real muA = 1;
  parameter Real muS = 0.7;
  parameter Real sAd = 1;
  parameter Real sSl = 1;
  parameter Real vAd = 1;
  parameter Real vSl = 1;
  inner PlanarMechanics.PlanarWorldIn3D planarWorld(constantGravity = {0, -g}) annotation(
    Placement(visible = true, transformation(origin = {-84, -86}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.VehicleComponents.Wheels.SlipBasedWheelJoint rearRightWheel(N = mass*(1 - massCenterY/100)*massCenterX/100, mu_A = muA, mu_S = muS, r = {0, 1}, radius = wheelRadius, sAdhesion = sAd, sSlide = sSl, vAdhesion_min = vAd, vSlide_min = vSl) annotation(
    Placement(visible = true, transformation(origin = {58, -56}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.VehicleComponents.Wheels.SlipBasedWheelJoint rearLeftWheel(N = mass*(1 - massCenterY/100)*(1 - massCenterX/100), mu_A = muA, mu_S = muS, r = {0, 1}, radius = wheelRadius, sAdhesion = sAd, sSlide = sSl, vAdhesion_min = vAd, vSlide_min = vSl) annotation(
    Placement(visible = true, transformation(origin = {-52, -48}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  PlanarMechanics.VehicleComponents.Wheels.SlipBasedWheelJoint frontWheel(N = mass*massCenterY/100, mu_A = muA, mu_S = muS, r = {0, 1}, radius = wheelRadius, sAdhesion = sAd, sSlide = sSl, vAdhesion_min = vAd, vSlide_min = vSl) annotation(
    Placement(visible = true, transformation(origin = {6, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation rearLeft(r = {vehicleWidth*massCenterX/100, 0}) annotation(
    Placement(visible = true, transformation(origin = {-20, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation rearRight(r = {vehicleWidth*(1 - massCenterX/100), 0}) annotation(
    Placement(visible = true, transformation(origin = {18, -54}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation rear(r = {(50 - massCenterX)/100*vehicleWidth, vehicleLength*massCenterY/100}) annotation(
    Placement(visible = true, transformation(origin = {-2, -24}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  PlanarMechanics.Parts.FixedTranslation front(r = {0, vehicleLength*(1 - massCenterY/100)}) annotation(
    Placement(visible = true, transformation(origin = {-6, 10}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  PlanarMechanics.Parts.Body body(I = inertiaBody, m = mass, phi(fixed = true), v(start = {0, 10}), w(fixed = true)) annotation(
    Placement(visible = true, transformation(origin = {20, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Joints.Revolute revolute(phi(fixed = true), useFlange = false, w(fixed = true)) annotation(
    Placement(visible = true, transformation(origin = {-6, 34}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
  Modelica.Mechanics.Rotational.Components.Inertia rearLeftInertia(J = inertiaWheel, phi(fixed = true, start = 0), w(fixed = true, start = 5)) annotation(
    Placement(visible = true, transformation(origin = {-78, -50}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia rearRightInertia(J = inertiaWheel, phi(fixed = true, start = 0), w(fixed = true, start = 5)) annotation(
    Placement(visible = true, transformation(origin = {86, -56}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia frontInertia(J = inertiaWheel, phi(fixed = true, start = 0), w(fixed = true, start = 5)) annotation(
    Placement(visible = true, transformation(origin = {38, 66}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0) annotation(
    Placement(visible = true, transformation(origin = {-90, 10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation frontTurn(r = {0, wheelRadius})  annotation(
    Placement(visible = true, transformation(origin = {-6, 62}, extent = {{-10, -10}, {10, 10}}, rotation = -90)));
equation
  connect(rearLeftWheel.frame_a, rearLeft.frame_a) annotation(
    Line(points = {{-48, -48}, {-30, -48}, {-30, -50}}));
  connect(rearLeft.frame_b, rearRight.frame_a) annotation(
    Line(points = {{-10, -50}, {8, -50}, {8, -54}}));
  connect(rearRight.frame_b, rearRightWheel.frame_a) annotation(
    Line(points = {{28, -54}, {54, -54}, {54, -56}}));
  connect(rear.frame_b, rearRight.frame_a) annotation(
    Line(points = {{-2, -34}, {8, -34}, {8, -54}}, color = {95, 95, 95}));
  connect(front.frame_b, rear.frame_a) annotation(
    Line(points = {{-6, 0}, {-2, 0}, {-2, -14}}));
  connect(body.frame_a, rear.frame_a) annotation(
    Line(points = {{10, -8}, {-2, -8}, {-2, -14}}));
  connect(front.frame_a, revolute.frame_b) annotation(
    Line(points = {{-6, 20}, {-6, 24}}));
  connect(frontWheel.flange_a, frontInertia.flange_b) annotation(
    Line(points = {{16, 80}, {23, 80}, {23, 66}, {28, 66}}));
  connect(rearRightWheel.flange_a, rearRightInertia.flange_b) annotation(
    Line(points = {{68, -56}, {76, -56}}));
  connect(rearLeftInertia.flange_b, rearLeftWheel.flange_a) annotation(
    Line(points = {{-68, -50}, {-62, -50}, {-62, -48}}));
  connect(body.frame_a, rear.frame_a) annotation(
    Line(points = {{10, -8}, {-2, -8}, {-2, -14}}, color = {95, 95, 95}));
  connect(const.y, rearLeftWheel.dynamicLoad) annotation(
    Line(points = {{-78, 10}, {-74, 10}, {-74, -70}, {-52, -70}, {-52, -58}}, color = {0, 0, 127}));
  connect(const.y, frontWheel.dynamicLoad) annotation(
    Line(points = {{-78, 10}, {-38, 10}, {-38, 52}, {6, 52}, {6, 70}}, color = {0, 0, 127}));
  connect(const.y, rearRightWheel.dynamicLoad) annotation(
    Line(points = {{-78, 10}, {44, 10}, {44, -74}, {58, -74}, {58, -66}}, color = {0, 0, 127}));
  connect(body.frame_a, front.frame_b) annotation(
    Line(points = {{6, -8}, {-6, -8}, {-6, 0}}, color = {95, 95, 95}));
  connect(revolute.frame_a, frontTurn.frame_b) annotation(
    Line(points = {{-6, 44}, {-6, 52}}));
  connect(frontTurn.frame_a, frontWheel.frame_a) annotation(
    Line(points = {{-6, 72}, {2, 72}, {2, 80}}, color = {95, 95, 95}));
  annotation(
    Placement(visible = true, transformation(origin = {16, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)),
    uses(Modelica(version = "4.0.0"), PlanarMechanics(version = "1.6.0")),
    Diagram(coordinateSystem(extent = {{-100, -100}, {100, 100}})));
end ThreeWheelVehicle;
