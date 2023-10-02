model RevolutePhi "A revolute joint"
import PlanarMechanics;
  extends PlanarMechanics.Interfaces.PartialTwoFrames;
  parameter Boolean useFlange = false "= true, if force flange enabled, otherwise implicitly grounded" annotation(
    Evaluate = true,
    HideResult = true,
    choices(checkBox = true));
  parameter Boolean animate = true "= true, if animation shall be enabled" annotation(
    Evaluate = true,
    HideResult = true);
  parameter StateSelect stateSelect = StateSelect.default "Priority to use phi and w as states" annotation(
    HideResult = true,
    Dialog(tab = "Advanced"));
  Modelica.Mechanics.Rotational.Interfaces.Flange_b support if useFlange "1-dim. rotational flange of the drive support (assumed to be fixed in the world frame, NOT in the joint)" annotation(
    Placement(transformation(extent = {{-10, 10}, {10, -10}}, rotation = 180, origin = {-60, -100})));
  parameter Modelica.Units.SI.Length zPosition = planarWorld.defaultZPosition "Position z of cylinder representing the joint axis" annotation(
    Dialog(tab = "Animation", group = "if animation = true", enable = animate));
  parameter Modelica.Units.SI.Distance cylinderLength = planarWorld.defaultJointLength "Length of cylinder representing the joint axis" annotation(
    Dialog(tab = "Animation", group = "if animation = true", enable = animate));
  parameter Modelica.Units.SI.Distance cylinderDiameter = planarWorld.defaultJointWidth "Diameter of cylinder representing the joint axis" annotation(
    Dialog(tab = "Animation", group = "if animation = true", enable = animate));
  input Modelica.Mechanics.MultiBody.Types.Color cylinderColor = Modelica.Mechanics.MultiBody.Types.Defaults.JointColor "Color of cylinder representing the joint axis" annotation(
    HideResult = true,
    Dialog(colorSelector = true, tab = "Animation", group = "if animation = true", enable = animate));
  input Modelica.Mechanics.MultiBody.Types.SpecularCoefficient specularCoefficient = planarWorld.defaultSpecularCoefficient "Reflection of ambient light (= 0: light is completely absorbed)" annotation(
    HideResult = true,
    Dialog(tab = "Animation", group = "if animation = true", enable = animate));
  parameter Boolean extraLine = false "Enable black line in the cylinder to show the joint rotation" annotation(
    HideResult = true,
    Dialog(tab = "Animation", group = "if animation = true", enable = animate),
    choices(checkBox = true));
  Modelica.Units.SI.Angle phi(final stateSelect = stateSelect, start = 0) "Angular position" annotation(
    Dialog(group = "Initialization", showStartAttribute = true));
  Modelica.Units.SI.AngularVelocity w(final stateSelect = stateSelect, start = 0) "Angular velocity" annotation(
    Dialog(group = "Initialization", showStartAttribute = true));
  Modelica.Units.SI.AngularAcceleration z(start = 0) "Angular acceleration" annotation(
    Dialog(group = "Initialization", showStartAttribute = true));
  //Modelica.Units.SI.Torque t "Torque";
  Modelica.Blocks.Interfaces.RealInput angle annotation(
    Placement(visible = true, transformation(origin = {0, 100}, extent = {{-20, -20}, {20, 20}}, rotation = -90), iconTransformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 90)));
protected
  final Modelica.Mechanics.MultiBody.Types.ShapeExtra extra = if extraLine then 1 else 0 "Extra parameter to visualize black line in visualized cylinder" annotation(
    HideResult = true);
  // The following is defined in order to omit if-statements in visualization block (cylinder)
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape cylinder(shapeType = "cylinder", color = cylinderColor, specularCoefficient = specularCoefficient, length = cylinderLength, width = cylinderDiameter, height = cylinderDiameter, lengthDirection = {0, 0, 1}, widthDirection = {1, 0, 0}, r_shape = {0, 0, -cylinderLength/2}, r = Modelica.Mechanics.MultiBody.Frames.resolve1(planarWorld.R, {frame_a.x, frame_a.y, zPosition}) + planarWorld.r_0, R = Modelica.Mechanics.MultiBody.Frames.absoluteRotation(planarWorld.R, Modelica.Mechanics.MultiBody.Frames.planarRotation({0, 0, 1}, phi, w)), extra = extra) if planarWorld.enableAnimation and animate;
  //Visualization
protected
  Modelica.Mechanics.Rotational.Components.Fixed fixed "support flange is fixed to ground" annotation(
    Placement(transformation(extent = {{-10, -10}, {10, 10}}, rotation = 180, origin = {-60, -80})));
equation
//Differential Equations
  w = der(phi);
  z = der(w);
  phi = angle;
//actutation torque
  //if not useFlange then
    //t = 0;
  //end if;
//rigidly connect positions
  frame_a.x = frame_b.x;
  frame_a.y = frame_b.y;
  frame_a.phi + phi = frame_b.phi;
//balance forces
  frame_a.fx + frame_b.fx = 0;
  frame_a.fy + frame_b.fy = 0;
  frame_a.t + frame_b.t = 0;
  //frame_a.t = 0;
  connect(fixed.flange, support) annotation(
    Line(points = {{-60, -80}, {-60, -100}}));
  annotation(
    Icon(graphics = {Rectangle(fillColor = {175, 175, 175}, fillPattern = FillPattern.HorizontalCylinder, extent = {{-20, 20}, {20, -20}}), Rectangle(fillColor = {175, 175, 175}, fillPattern = FillPattern.HorizontalCylinder, extent = {{20, 60}, {100, -60}}), Rectangle(fillColor = {175, 175, 175}, fillPattern = FillPattern.HorizontalCylinder, extent = {{-100, 60}, {-20, -62}}), Text(textColor = {0, 0, 255}, extent = {{-150, 100}, {150, 60}}, textString = "%name")}),
    Documentation(revisions = "<html>
<p>
<img src=\"modelica://PlanarMechanics/Resources/Images/dlr_logo.png\" alt=\"DLR logo\">
<strong>Developed 2010 at the DLR Institute of System Dynamics and Control</strong>
</p>
</html>", info = "<html>
<p>
Joint of in-plane rotation of <code>frame_b</code> relative to <code>frame_a</code>.
The two frames coincide when the rotation angle <var>phi</var>&nbsp;= 0&deg;.
</p>
<p>
Optionally, two additional one-dimensional mechanical flanges (flange
<code>flange_a</code> represents the driving flange and flange
<code>support</code> represents the bearing) can be enabled via
parameter <code>useFlange</code>. The enabled <code>flange_a</code>
flange can be driven with elements of the
<a href=\"modelica://Modelica.Mechanics.Rotational\">Modelica.Mechanics.Rotational</a>
library.
</p>
<p>
In the &quot;Initialization&quot; block, angular position <code>phi</code>,
angular velocity&nbsp;<code>w</code> as well as angular
acceleration&nbsp;<code>z</code> can be initialized.
</p>
<p>
It can be defined via parameter (in &quot;Advanced&quot; tab)
<code>stateSelect</code> that the relative angle <code>phi</code>
and its derivative shall be definitely used as states by setting
<code>stateSelect&nbsp;= StateSelect.always</code>.
</p>
<p>
In &quot;Animation&quot; group, animation parameters for this model can be set,
where <code>zPosition</code> represents the model&apos;s position along
the&nbsp;<var>z</var> axis in 3D animation. Some of the values can be preset
by an outer <a href=\"modelica://PlanarMechanics.PlanarWorld\">PlanarWorld</a>
model.
</p>
</html>"),
    uses(Modelica(version = "4.0.0")));
end RevolutePhi;
