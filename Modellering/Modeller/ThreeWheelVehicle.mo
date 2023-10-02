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
  parameter Real massCenterY = 30 "Percentage of vehicle length, 0 - rear, 100 - front";
  // Slip parameters
  parameter Real muA = 1;
  parameter Real muS = 0.7;
  parameter Real sAd = 1;
  parameter Real sSl = 1;
  parameter Real vAd = 1;
  parameter Real vSl = 1;
  // Other
  parameter Real speedStart = 100/3.6 "m/s"; // Start speed of vehicle
  parameter Real omegaStart = speedStart/wheelRadius "rad/s"; // Start angle velocity of each wheel inertia
  Real speed(start=speedStart) "m/s Car speed";
  Real S(start=0) "m Traveled length";
  Real R(start=100) "m Radius of turning";
  Real Pleft(start=0) "W Power of left rear wheel";
  Real Pright(start=0) "W Power of right rear wheel";
  
  PlanarMechanics.VehicleComponents.Wheels.SlipBasedWheelJoint frontWheel(N = mass*massCenterY/100, mu_A = muA, mu_S = muS, r = {0, 1}, radius = wheelRadius, sAdhesion = sAd, sSlide = sSl, vAdhesion_min = vAd, vSlide_min = vSl) annotation(
    Placement(visible = true, transformation(origin = {6, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia frontInertia(J = inertiaWheel, phi(fixed = true, start = 0), w(fixed = true, start = 5)) annotation(
    Placement(visible = true, transformation(origin = {38, 66}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const1(k = 10) annotation(
    Placement(visible = true, transformation(origin = {-156, -64}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const2(k = 15) annotation(
    Placement(visible = true, transformation(origin = {164, -78}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  WheelWithSlip rearRightWheel(N = g*mass*(1 - massCenterY/100)*massCenterX/100, mu_A = muA, mu_S = muS, r = {0, 1}, radius = wheelRadius, sAdhesion = sAd, sSlide = sSl, vAdhesion_min = vAd, vSlide_min = vSl, w_roll(start = omegaStart)) annotation(
    Placement(visible = true, transformation(origin = {60, -74}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation front(r = {0, vehicleLength*(1 - massCenterY/100)}) annotation(
    Placement(visible = true, transformation(origin = {-6, 6}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  Modelica.Mechanics.Rotational.Sources.Torque torqueRearLeft annotation(
    Placement(visible = true, transformation(origin = {-122, -66}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia rearLeftInertia(J = inertiaWheel, phi(fixed = true, start = 0), w(fixed = true, start = omegaStart)) annotation(
    Placement(visible = true, transformation(origin = {-76, -68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation rearRight(r = {vehicleWidth/2, 0}) annotation(
    Placement(visible = true, transformation(origin = {20, -72}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation rearLeft(r = {vehicleWidth/2, 0}) annotation(
    Placement(visible = true, transformation(origin = {-18, -68}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation rear(r = {0, vehicleLength*massCenterY/100 - wheelRadius}) annotation(
    Placement(visible = true, transformation(origin = {-6, -34}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  PlanarMechanics.Parts.Body body(I = inertiaBody, enableGravity = false, m = mass, phi(fixed = true), r(each fixed = true), v(each fixed = true, start = {0, speedStart}), w(fixed = true)) annotation(
    Placement(visible = true, transformation(origin = {20, -16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia rearRightInertia(J = inertiaWheel, phi(fixed = true, start = 0), w(fixed = true, start = omegaStart)) annotation(
    Placement(visible = true, transformation(origin = {88, -74}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0) annotation(
    Placement(visible = true, transformation(origin = {-120, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque torqueRearRight annotation(
    Placement(visible = true, transformation(origin = {132, -74}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  inner PlanarMechanics.PlanarWorldIn3D planarWorld(constantGravity = {0, -g}) annotation(
    Placement(visible = true, transformation(origin = {-160, -98}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  WheelWithSlip rearLeftWheel(N = g*mass*(1 - massCenterY/100)*(1 - massCenterX/100), mu_A = muA, mu_S = muS, r = {0, 1}, radius = wheelRadius, sAdhesion = sAd, sSlide = sSl, vAdhesion_min = vAd, vSlide_min = vSl, w_roll(start = omegaStart)) annotation(
    Placement(visible = true, transformation(origin = {-50, -66}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation frontTurn(r = {0, -wheelRadius/5}) annotation(
    Placement(visible = true, transformation(origin = {-24, 58}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  PlanarMechanics.Joints.Revolute revolute(useFlange = true)  annotation(
    Placement(visible = true, transformation(origin = {-22, 32}, extent = {{10, -10}, {-10, 10}}, rotation = -90)));
  Modelica.Mechanics.Rotational.Sources.Torque torque annotation(
    Placement(visible = true, transformation(origin = {-54, 26}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  SteeringControl steeringControl(i = 1000, p = 800) annotation(
    Placement(visible = true, transformation(origin = {-92, 26}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sensors.AngleSensor angleSensor annotation(
    Placement(visible = true, transformation(origin = {-66, 54}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Step step(height = 20/180*3.14159, offset = -10/180*3.14159, startTime = 15) annotation(
    Placement(visible = true, transformation(origin = {-148, 24}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.Body body1(I = 0.00000001, enableGravity = false, m = .01)  annotation(
    Placement(visible = true, transformation(origin = {-24, 84}, extent = {{-10, -10}, {10, 10}}, rotation = 90)));
equation
  speed = sqrt(body.v[1]^2 + body.v[2]^2);
  S = abs(body.r[1]) + abs(body.r[2]);
  R = min(speed/(body.w + 0.00000001), 100);
  Pleft = rearLeftWheel.w_roll*torqueRearLeft.tau;
  Pright = rearRightWheel.w_roll*torqueRearRight.tau;
  connect(frontWheel.flange_a, frontInertia.flange_b) annotation(
    Line(points = {{16, 80}, {23, 80}, {23, 66}, {28, 66}}));
  connect(rear.frame_a, rearLeft.frame_b) annotation(
    Line(points = {{-6, -44}, {-8, -44}, {-8, -68}}));
  connect(torqueRearLeft.flange, rearLeftWheel.flange_a) annotation(
    Line(points = {{-112, -66}, {-100, -66}, {-100, -44}, {-58, -44}, {-58, -66}, {-60, -66}}));
  connect(rear.frame_b, front.frame_a) annotation(
    Line(points = {{-6, -24}, {-6, -4}}, color = {95, 95, 95}));
  connect(rearLeftInertia.flange_b, rearLeftWheel.flange_a) annotation(
    Line(points = {{-66, -68}, {-60, -68}, {-60, -66}}));
  connect(const.y, rearLeftWheel.dynamicLoad) annotation(
    Line(points = {{-109, -8}, {-75, -8}, {-75, -88}, {-50, -88}, {-50, -76}}, color = {0, 0, 127}));
  connect(body.frame_a, front.frame_a) annotation(
    Line(points = {{10, -16}, {-6, -16}, {-6, -4}}));
  connect(rearLeft.frame_b, rearRight.frame_a) annotation(
    Line(points = {{-8, -68}, {10, -68}, {10, -72}}));
  connect(rearRight.frame_b, rearRightWheel.frame_a) annotation(
    Line(points = {{30, -72}, {56, -72}, {56, -74}}));
  connect(rearLeftWheel.frame_a, rearLeft.frame_a) annotation(
    Line(points = {{-46, -66}, {-28, -66}, {-28, -68}}));
  connect(rearRightWheel.flange_a, rearRightInertia.flange_b) annotation(
    Line(points = {{70, -74}, {78, -74}}));
  connect(const1.y, torqueRearLeft.tau) annotation(
    Line(points = {{-145, -64}, {-137, -64}, {-137, -66}, {-135, -66}}, color = {0, 0, 127}));
  connect(const2.y, torqueRearRight.tau) annotation(
    Line(points = {{153, -78}, {143, -78}, {143, -74}}, color = {0, 0, 127}));
  connect(const.y, rearRightWheel.dynamicLoad) annotation(
    Line(points = {{-109, -8}, {43, -8}, {43, -92}, {60, -92}, {60, -84}}, color = {0, 0, 127}));
  connect(torqueRearRight.flange, rearRightWheel.flange_a) annotation(
    Line(points = {{122, -74}, {104, -74}, {104, -52}, {70, -52}, {70, -74}}));
  connect(const.y, frontWheel.dynamicLoad) annotation(
    Line(points = {{-108, -8}, {6, -8}, {6, 70}}, color = {0, 0, 127}));
  connect(frontTurn.frame_b, frontWheel.frame_a) annotation(
    Line(points = {{-24, 68}, {2, 68}, {2, 80}}, color = {95, 95, 95}));
  connect(frontTurn.frame_a, revolute.frame_b) annotation(
    Line(points = {{-24, 48}, {-22, 48}, {-22, 42}}, color = {95, 95, 95}));
  connect(revolute.frame_a, front.frame_b) annotation(
    Line(points = {{-22, 22}, {-6, 22}, {-6, 16}}, color = {95, 95, 95}));
  connect(torque.flange, revolute.flange_a) annotation(
    Line(points = {{-44, 26}, {-32, 26}, {-32, 32}}));
  connect(steeringControl.y, torque.tau) annotation(
    Line(points = {{-80, 26}, {-66, 26}}, color = {0, 0, 127}));
  connect(revolute.flange_a, angleSensor.flange) annotation(
    Line(points = {{-32, 32}, {-56, 32}, {-56, 54}}));
  connect(angleSensor.phi, steeringControl.u[2]) annotation(
    Line(points = {{-76, 54}, {-104, 54}, {-104, 26}}, color = {0, 0, 127}));
  connect(steeringControl.u[1], step.y) annotation(
    Line(points = {{-104, 26}, {-136, 26}, {-136, 24}}, color = {0, 0, 127}));
  connect(frontTurn.frame_b, body1.frame_a) annotation(
    Line(points = {{-24, 68}, {-24, 74}}, color = {95, 95, 95}));
  annotation(
    Placement(visible = true, transformation(origin = {16, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)),
    uses(Modelica(version = "4.0.0"), PlanarMechanics(version = "1.6.0")),
  Diagram(coordinateSystem(extent = {{-180, 100}, {180, -120}})),
  version = "");
end ThreeWheelVehicle;
