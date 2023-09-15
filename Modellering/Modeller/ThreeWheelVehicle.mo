model ThreeWheelVehicle

  parameter Real wheelRadius = 12;
  Modelica.Blocks.Sources.Constant const(k = 10)  annotation(
    Placement(visible = true, transformation(origin = {-82, -10}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.VehicleComponents.Wheels.SlipBasedWheelJoint slipBasedWheelJoint(N = 500, mu_A = .7, mu_S = 1, r = {0, 1}, radius = .4, sAdhesion = 1, sSlide = 1, vAdhesion_min = 1, vSlide_min = 1, w_roll(fixed = true, start = 0.01))  annotation(
    Placement(visible = true, transformation(origin = {-28, -48}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  PlanarMechanics.VehicleComponents.Wheels.SlipBasedWheelJoint slipBasedWheelJoint1(N = 500, mu_A = .7, mu_S = 1, r = {0, 1}, radius = 0.4, sAdhesion = 1, sSlide = 1, vAdhesion_min = 1, vSlide_min = 1, w_roll(fixed = true, start = 0.01))  annotation(
    Placement(visible = true, transformation(origin = {50, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.FixedTranslation fixedTranslation annotation(
    Placement(visible = true, transformation(origin = {-10, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia inertia(J = 0.035, a(start = 0), phi(start = 0), w(start = 0))  annotation(
    Placement(visible = true, transformation(origin = {-80, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia inertia1(J = 0.035, a(start = 0), phi(start = 0), w(start = 0))  annotation(
    Placement(visible = true, transformation(origin = {110, -48}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  inner PlanarMechanics.PlanarWorldIn3D planarWorld annotation(
    Placement(visible = true, transformation(origin = {-84, -86}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Parts.Body body(I = 1, m = 1000)  annotation(
    Placement(visible = true, transformation(origin = {8, -32}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  PlanarMechanics.Parts.FixedTranslation fixedTranslation1 annotation(
    Placement(visible = true, transformation(origin = {30, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque torque annotation(
    Placement(visible = true, transformation(origin = {-36, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant constant1(k = 0) annotation(
    Placement(visible = true, transformation(origin = {4, -114}, extent = {{-60, 20}, {-40, 40}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.IdealGear gear(ratio = 1) annotation(
    Placement(visible = true, transformation(origin = {-54, -48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.IdealGear idealGear(ratio = 1) annotation(
    Placement(visible = true, transformation(origin = {78, -48}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
equation
  connect(slipBasedWheelJoint.frame_a, fixedTranslation.frame_a) annotation(
    Line(points = {{-24, -48}, {-20, -48}}, color = {95, 95, 95}));
  connect(slipBasedWheelJoint1.frame_a, fixedTranslation1.frame_b) annotation(
    Line(points = {{46, -48}, {40, -48}}));
  connect(fixedTranslation.frame_b, fixedTranslation1.frame_a) annotation(
    Line(points = {{0, -48}, {20, -48}}, color = {95, 95, 95}));
  connect(body.frame_a, fixedTranslation.frame_b) annotation(
    Line(points = {{8, -42}, {0, -42}, {0, -48}}, color = {95, 95, 95}));
  connect(const.y, torque.tau) annotation(
    Line(points = {{-70, -10}, {-60, -10}, {-60, -12}, {-48, -12}}, color = {0, 0, 127}));
  connect(constant1.y, slipBasedWheelJoint.dynamicLoad) annotation(
    Line(points = {{-34, -84}, {-28, -84}, {-28, -58}}, color = {0, 0, 127}));
  connect(constant1.y, slipBasedWheelJoint1.dynamicLoad) annotation(
    Line(points = {{-34, -84}, {50, -84}, {50, -58}}, color = {0, 0, 127}));
  connect(gear.flange_b, slipBasedWheelJoint.flange_a) annotation(
    Line(points = {{-44, -48}, {-38, -48}}));
  connect(inertia.flange_b, gear.flange_a) annotation(
    Line(points = {{-70, -48}, {-64, -48}}));
  connect(torque.flange, gear.flange_a) annotation(
    Line(points = {{-26, -12}, {-64, -12}, {-64, -48}}));
  connect(slipBasedWheelJoint1.flange_a, idealGear.flange_b) annotation(
    Line(points = {{60, -48}, {68, -48}}));
  connect(idealGear.flange_a, inertia1.flange_b) annotation(
    Line(points = {{88, -48}, {100, -48}}));
  connect(torque.flange, inertia1.flange_b) annotation(
    Line(points = {{-26, -12}, {100, -12}, {100, -48}}));
  annotation(
    uses(Modelica(version = "4.0.0"), PlanarMechanics(version = "1.6.0")));
end ThreeWheelVehicle;
