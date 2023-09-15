model SingleTireBase
  // Modelling parameters of one tire
  parameter Real wheelRadius = 0.42 "m";
  parameter Real wheelInertia = 0.35 "kg m2";
  parameter Real gearRatio = 1;
  parameter Real mass = 100 "kg";
  parameter Real g = 9.82 "N/m Gravity";
  
  // Slide slip parameters TODO
  
  
  // Wheel
  PlanarMechanics.VehicleComponents.Wheels.SlipBasedWheelJoint wheel(N = mass*g, mu_A = 1, mu_S = 1, r = {0, 1}, radius = wheelRadius, sAdhesion = 1, sSlide = 1, useHeatPort = false, vAdhesion_min = 1, vSlide_min = 1)  annotation(
    Placement(visible = true, transformation(origin = {66, -12}, extent = {{10, -10}, {-10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.Inertia inertia(J = wheelInertia)  annotation(
    Placement(visible = true, transformation(origin = {-4, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant const(k = 0)  annotation(
    Placement(visible = true, transformation(origin = {40, -46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  PlanarMechanics.Interfaces.Frame_a frame_a annotation(
    Placement(visible = true, transformation(origin = {90, -14}, extent = {{-16, -16}, {16, 16}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Components.IdealGear gear(ratio = gearRatio)  annotation(
    Placement(visible = true, transformation(origin = {30, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
 
  // Motor model (torque source)
  Modelica.Blocks.Interfaces.RealInput motorTorqueInput annotation(
    Placement(visible = true, transformation(origin = {-80, -12}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-80, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sources.Torque torque annotation(
    Placement(visible = true, transformation(origin = {-36, -12}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  // Sensors
  Modelica.Mechanics.Rotational.Sensors.AngleSensor angleSensor annotation(
    Placement(visible = true, transformation(origin = {102, 6}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sensors.SpeedSensor speedSensor annotation(
    Placement(visible = true, transformation(origin = {102, 26}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Mechanics.Rotational.Sensors.AccSensor accSensor annotation(
    Placement(visible = true, transformation(origin = {102, 46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
 inner PlanarMechanics.PlanarWorld planarWorld annotation(
    Placement(visible = true, transformation(origin = {-60, -46}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(motorTorqueInput, torque.tau) annotation(
    Line(points = {{-80, -12}, {-48, -12}}, color = {0, 0, 127}));
  connect(angleSensor.flange, wheel.flange_a) annotation(
    Line(points = {{92, 6}, {56, 6}, {56, -12}}));
  connect(speedSensor.flange, wheel.flange_a) annotation(
    Line(points = {{92, 26}, {56, 26}, {56, -12}}));
  connect(accSensor.flange, wheel.flange_a) annotation(
    Line(points = {{92, 46}, {56, 46}, {56, -12}}));
  connect(inertia.flange_b, gear.flange_a) annotation(
    Line(points = {{6, -12}, {20, -12}}));
  connect(gear.flange_b, wheel.flange_a) annotation(
    Line(points = {{40, -12}, {56, -12}}));
  connect(wheel.frame_a, frame_a) annotation(
    Line(points = {{70, -12}, {90, -12}, {90, -14}}, color = {95, 95, 95}));
  connect(torque.flange, gear.flange_a) annotation(
    Line(points = {{-26, -12}, {-18, -12}, {-18, 4}, {20, 4}, {20, -12}}));
  connect(const.y, wheel.dynamicLoad) annotation(
    Line(points = {{51, -46}, {66, -46}, {66, -22}}, color = {0, 0, 127}));
  annotation(
    uses(Modelica(version = "4.0.0"), PlanarMechanics(version = "1.6.0")),
    Diagram(coordinateSystem(extent = {{-80, 60}, {160, -60}})),
    version = "",
    Icon(graphics = {Ellipse(extent = {{-40, 40}, {40, -40}}), Ellipse(extent = {{-20, 20}, {20, -20}}), Line(origin = {12.7057, 25.7057}, points = {{-12.7057, -5.70567}, {-12.7057, -45.7057}, {-12.7057, -25.7057}, {7.29433, -25.7057}, {-12.7057, -25.7057}, {1.29433, -11.7057}, {-12.7057, -25.7057}, {-28.7057, -13.7057}, {-12.7057, -25.7057}, {-32.7057, -25.7057}, {-12.7057, -25.7057}, {-26.7057, -39.7057}, {-12.7057, -25.7057}, {1.29433, -39.7057}, {-12.7057, -25.7057}, {-12.7057, -5.70567}, {-12.7057, -25.7057}}), Text(origin = {-69, -33}, extent = {{-29, -1}, {29, 1}}, textString = "Motor torque", fontSize = 14), Text(origin = {69, -34}, extent = {{-25, 6}, {25, -6}}, textString = "Wheel bearing")}, coordinateSystem(extent = {{-100, -100}, {100, 100}})));
end SingleTireBase;
