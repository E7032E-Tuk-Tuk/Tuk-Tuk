model SingleTire
  // Modelling parameters of one tire
  parameter Real wheelRadius = 0.42 "m";
  parameter Real wheelInertia = 0.35 "kg m2";
  parameter Real gearRatio = 1;
  parameter Real mass = 100 "kg";
  parameter Real g = 9.82 "N/m Gravity";
  // The tire
  SingleTireBase singleTire(wheelRadius=wheelRadius, wheelInertia=wheelInertia, gearRatio=gearRatio, mass=mass, g=g) annotation( Placement(visible = true, transformation(origin = {2, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  // Motor torque
  Modelica.Blocks.Sources.Ramp ramp(duration = 0, height = 0, offset = 1000)  annotation(
    Placement(visible = true, transformation(origin = {-66, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  // Sensors
  // Calculate air resistance
  //body
  inner PlanarMechanics.PlanarWorld planarWorld annotation(
    Placement(visible = true, transformation(origin = {-60, -46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(ramp.y, singleTire.motorTorqueInput) annotation(
    Line(points = {{-54, -12}, {-6, -12}}, color = {0, 0, 127}));
  annotation(
    uses(Modelica(version = "4.0.0"), PlanarMechanics(version = "1.6.0")),
    Diagram(coordinateSystem(extent = {{-80, 60}, {160, -60}})),
    version = "");
end SingleTire;
