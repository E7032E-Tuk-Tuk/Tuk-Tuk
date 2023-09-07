model SingleTire
  Modelica.Mechanics.Rotational.Components.IdealRollingWheel idealRollingWheel(radius = 42)  annotation(
    Placement(visible = true, transformation(origin = {44, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Translational.Components.Mass mass(a(start = 0.0001), m = 1000/4, v(start = 0.01))  annotation(
    Placement(visible = true, transformation(origin = {72, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia inertia(J = 0)  annotation(
    Placement(visible = true, transformation(origin = {10, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Ramp ramp(duration = 100, height = 100)  annotation(
    Placement(visible = true, transformation(origin = {-66, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque torque annotation(
    Placement(visible = true, transformation(origin = {-28, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Translational.Components.RollingResistance rollingResistance(fWeight = 1000/4)  annotation(
    Placement(visible = true, transformation(origin = {40, -46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Translational.Sources.Force airResistance annotation(
    Placement(visible = true, transformation(origin = {92, 20}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Translational.Sensors.SpeedSensor speedSensor annotation(
    Placement(visible = true, transformation(origin = {100, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Translational.Sensors.AccSensor accSensor annotation(
    Placement(visible = true, transformation(origin = {100, -26}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sensors.SpeedSensor angleSpeed annotation(
    Placement(visible = true, transformation(origin = {42, 44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sensors.TorqueSensor torqueSensor annotation(
    Placement(visible = true, transformation(origin = {42, 22}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Sqrt sqrt annotation(
    Placement(visible = true, transformation(origin = {142, -8}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain airResistanceCalc(k = 0.4)  annotation(
    Placement(visible = true, transformation(origin = {140, 20}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
equation
  connect(idealRollingWheel.flangeT, mass.flange_a) annotation(
    Line(points = {{54, -12}, {62, -12}}, color = {0, 127, 0}));
  connect(inertia.flange_b, idealRollingWheel.flangeR) annotation(
    Line(points = {{20, -12}, {34, -12}}));
  connect(torque.flange, inertia.flange_a) annotation(
    Line(points = {{-18, -12}, {0, -12}}));
  connect(ramp.y, torque.tau) annotation(
    Line(points = {{-54, -12}, {-40, -12}}, color = {0, 0, 127}));
  connect(rollingResistance.flange, idealRollingWheel.supportT) annotation(
    Line(points = {{50, -46}, {54, -46}, {54, -22}}, color = {0, 127, 0}));
  connect(airResistance.flange, mass.flange_b) annotation(
    Line(points = {{82, 20}, {82, -12}}, color = {0, 127, 0}));
  connect(idealRollingWheel.flangeR, torqueSensor.flange_a) annotation(
    Line(points = {{34, -12}, {32, -12}, {32, 22}}));
  connect(idealRollingWheel.flangeR, angleSpeed.flange) annotation(
    Line(points = {{34, -12}, {32, -12}, {32, 44}}));
  connect(mass.flange_b, speedSensor.flange) annotation(
    Line(points = {{82, -12}, {90, -12}, {90, -8}}, color = {0, 127, 0}));
  connect(mass.flange_b, accSensor.flange) annotation(
    Line(points = {{82, -12}, {90, -12}, {90, -26}}, color = {0, 127, 0}));
  connect(speedSensor.v, sqrt.u) annotation(
    Line(points = {{112, -8}, {130, -8}}, color = {0, 0, 127}));
  connect(sqrt.y, airResistanceCalc.u) annotation(
    Line(points = {{154, -8}, {162, -8}, {162, 20}, {152, 20}}, color = {0, 0, 127}));
  connect(airResistanceCalc.y, airResistance.f) annotation(
    Line(points = {{130, 20}, {104, 20}}, color = {0, 0, 127}));
  annotation(
    uses(Modelica(version = "4.0.0")),
  Diagram(coordinateSystem(extent = {{-80, 60}, {160, -60}})),
  version = "");
end SingleTire;
