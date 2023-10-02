model FreeRotation "A fixed translation between two components (rigid rod)"
import PlanarMechanics;
  extends PlanarMechanics.Interfaces.PartialTwoFrames;
  input Real alpha "Rotation angle";
  parameter Boolean animate = true "= true, if animation shall be enabled" annotation(
    Dialog(group = "Animation"));
  parameter Modelica.Units.SI.Length zPosition = planarWorld.defaultZPosition "Position z of cylinder representing the fixed rotation" annotation(
    Dialog(tab = "Animation", group = "if animation = true", enable = animate));
  parameter Modelica.Units.SI.Length cylinderLength = planarWorld.defaultJointLength "Length of cylinder representing the fixed rotation" annotation(
    Dialog(tab = "Animation", group = "if animation = true", enable = animate));
  parameter Modelica.Units.SI.Length cylinderDiameter = planarWorld.defaultJointWidth "Diameter of cylinder representing the fixed rotation" annotation(
    Dialog(tab = "Animation", group = "if animation = true", enable = animate));
  input Modelica.Mechanics.MultiBody.Types.Color color = PlanarMechanics.Types.Defaults.RodColor "Color of cylinder representing the fixed rotation" annotation(
    HideResult = true,
    Dialog(colorSelector = true, tab = "Animation", group = "if animation = true", enable = animate));
  input Modelica.Mechanics.MultiBody.Types.SpecularCoefficient specularCoefficient = planarWorld.defaultSpecularCoefficient "Reflection of ambient light (= 0: light is completely absorbed)" annotation(
    HideResult = true,
    Dialog(tab = "Animation", group = "if animation = true", enable = animate));
  //Visualization
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape cylinder(shapeType = "cylinder", color = color, specularCoefficient = specularCoefficient, length = cylinderLength, width = cylinderDiameter, height = cylinderDiameter, lengthDirection = {0, 0, 1}, widthDirection = {1, 0, 0}, r_shape = {0, 0, -0.05}, r = Modelica.Mechanics.MultiBody.Frames.resolve1(planarWorld.R, {frame_a.x, frame_a.y, zPosition}) + planarWorld.r_0, R = planarWorld.R) if planarWorld.enableAnimation and animate;
  Modelica.Blocks.Interfaces.RealInput u annotation(
    Placement(visible = true, transformation(origin = {0, -100}, extent = {{-20, -20}, {20, 20}}, rotation = 90), iconTransformation(origin = {0, -80}, extent = {{-20, -20}, {20, 20}}, rotation = 90)));
equation
  alpha = u;
  frame_a.x = frame_b.x;
  frame_a.y = frame_b.y;
  frame_a.phi + alpha = frame_b.phi;
  frame_a.fx + frame_b.fx = 0;
  frame_a.fy + frame_b.fy = 0;
  frame_a.t + frame_b.t = 0;
  annotation(
    Icon(graphics = {Polygon(fillColor = {175, 175, 175}, fillPattern = FillPattern.Solid, points = {{96, -8}, {96, 12}, {0, -30}, {-96, 12}, {-96, -6}, {0, -50}, {96, -8}}), Ellipse(fillColor = {175, 175, 175}, fillPattern = FillPattern.Solid, extent = {{-20, -20}, {20, -60}}), Ellipse(lineColor = {255, 255, 255}, fillColor = {175, 175, 175}, fillPattern = FillPattern.Solid, lineThickness = 0.5, extent = {{-10, -30}, {10, -50}}), Text(textColor = {128, 128, 128}, extent = {{-108, -24}, {-72, -49}}, textString = "a"), Text(textColor = {128, 128, 128}, extent = {{72, -24}, {108, -49}}, textString = "b"), Text(textColor = {0, 0, 255}, extent = {{-150, 70}, {150, 30}}, textString = "%name")}, coordinateSystem(extent = {{-100, -100}, {100, 100}})),
    Documentation(revisions = "<html>
<p>
<img src=\"modelica://PlanarMechanics/Resources/Images/dlr_logo.png\" alt=\"DLR logo\">
<strong>Developed 2010 at the DLR Institute of System Dynamics and Control</strong>
</p>
</html>", info = "<html>
<p>
This component assures a&nbsp;static angle difference <strong>alpha</strong> between
two frame connectors, to which <strong>frame_a</strong> and <strong>frame_b</strong>
are connected.
</p>
</html>"),
    uses(Modelica(version = "4.0.0")));
end FreeRotation;
