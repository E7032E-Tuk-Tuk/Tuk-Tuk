model SingleTire
  Modelica.Mechanics.Rotational.Components.IdealRollingWheel idealRollingWheel annotation(
    Placement(visible = true, transformation(origin = {44, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Translational.Components.Mass mass annotation(
    Placement(visible = true, transformation(origin = {72, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  BLDCmotor bLDCmotor annotation(
    Placement(visible = true, transformation(origin = {-24, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia inertia annotation(
    Placement(visible = true, transformation(origin = {10, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp(duration = 100, height = 100)  annotation(
    Placement(visible = true, transformation(origin = {-66, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(idealRollingWheel.flangeT, mass.flange_a) annotation(
    Line(points = {{54, -12}, {62, -12}}, color = {0, 127, 0}));
  connect(bLDCmotor.flange_a, inertia.flange_a) annotation(
    Line(points = {{-13, -12}, {0, -12}}));
  connect(inertia.flange_b, idealRollingWheel.flangeR) annotation(
    Line(points = {{20, -12}, {34, -12}}));
  connect(ramp.y, bLDCmotor.voltageIn) annotation(
    Line(points = {{-54, -12}, {-36, -12}}, color = {0, 0, 127}));
  annotation(
    uses(Modelica(version = "4.0.0")));
end SingleTire;
