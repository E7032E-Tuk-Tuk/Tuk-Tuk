model WheelWithSlip "Slip-Friction based wheel joint"
  extends PlanarMechanics.VehicleComponents.Wheels.BaseClasses.WheelBase annotation(
    IconMap(extent = {{-100, -100}, {100, 100}}, primitivesVisible = false));
  Modelica.Blocks.Interfaces.RealInput dynamicLoad(unit = "N") annotation(
    Placement(transformation(extent = {{20, -20}, {-20, 20}}, rotation = 270, origin = {0, -100})));
  
  outer PlanarMechanics.PlanarWorld planarWorld "planar world model";
  
  parameter StateSelect stateSelect = StateSelect.default "Priority to use acceleration as states" annotation(
    HideResult = true,
    Dialog(tab = "Advanced"));
  parameter Modelica.Units.SI.Length r[2] "Driving direction of the wheel at angle phi = 0";
  parameter Modelica.Units.SI.Force N "Base normal load";
  parameter Modelica.Units.SI.Velocity vAdhesion_min "Minimum adhesion velocity";
  parameter Modelica.Units.SI.Velocity vSlide_min "Minimum sliding velocity";
  parameter Real sAdhesion "Adhesion slippage";
  parameter Real sSlide "Sliding slippage";
  parameter Real mu_A "Friction coefficient at adhesion";
  parameter Real mu_S "Friction coefficient at sliding";
  final parameter Modelica.Units.SI.Length l = Modelica.Math.Vectors.length(r) "Length of r";
  final parameter Real e[2](each final unit = "1") = Modelica.Math.Vectors.normalizeWithAssert(r) "Unit vector in direction of r";
  Real e0[2] "Unit vector in direction of r resolved w.r.t. inertial frame";
  Real R[2, 2] "Rotation matrix";
  Modelica.Units.SI.Angle phi_roll(stateSelect = stateSelect, start = 0) "Roll angle of the wheel" annotation(
    Dialog(group = "Initialization", showStartAttribute = true));
  Modelica.Units.SI.AngularVelocity w_roll(final stateSelect = stateSelect, start = 0) "Roll velocity of wheel" annotation(
    Dialog(group = "Initialization", showStartAttribute = true));
  Modelica.Units.SI.Velocity v[2] "velocity";
  Modelica.Units.SI.Velocity v_lat(start = 0) "Driving in lateral direction" annotation(
    Dialog(group = "Initialization", showStartAttribute = true));
  Modelica.Units.SI.Velocity v_long(start = 0) "Velocity in longitudinal direction" annotation(
    Dialog(group = "Initialization", showStartAttribute = true));
  Modelica.Units.SI.Velocity v_slip_long(start = 0) "Slip velocity in longitudinal direction" annotation(
    Dialog(group = "Initialization", showStartAttribute = true));
  Modelica.Units.SI.Velocity v_slip_lat(start = 0) "Slip velocity in lateral direction" annotation(
    Dialog(group = "Initialization", showStartAttribute = true));
  Modelica.Units.SI.Velocity v_slip "Slip velocity";
  Modelica.Units.SI.Force f "Longitudinal force";
  Modelica.Units.SI.Force f_lat "Longitudinal force";
  Modelica.Units.SI.Force f_long "Longitudinal force";
  Modelica.Units.SI.Force fN "Base normal load";
  Modelica.Units.SI.Velocity vAdhesion "Adhesion velocity";
  Modelica.Units.SI.Velocity vSlide "Sliding velocity";
  Modelica.Units.SI.Force f_roll "Rolling resistance";
  Modelica.Units.SI.Torque torque_roll "Rolling torque resistance";
  parameter Real cr "Rolling resistance constant";
  parameter Modelica.Units.SI.Velocity v0_roll(final min=Modelica.Constants.eps)=0.1
    "Regularization below v0";
  parameter Boolean animate = true "= true, if animation shall be enabled" annotation(
    Dialog(group = "Animation"));
  parameter Modelica.Units.SI.Length zPosition = planarWorld.defaultZPosition "Position z of the body" annotation(
    Dialog(tab = "Animation", group = "if animation = true", enable = animate));
  parameter Modelica.Units.SI.Length diameter = 0.1 "Diameter of the rims" annotation(
    Dialog(tab = "Animation", group = "if animation = true", enable = animate));
  parameter Modelica.Units.SI.Length width = diameter*0.6 "Width of the wheel" annotation(
    Dialog(tab = "Animation", group = "if animation = true", enable = animate));
  input Modelica.Mechanics.MultiBody.Types.SpecularCoefficient specularCoefficient = planarWorld.defaultSpecularCoefficient "Reflection of ambient light (= 0: light is completely absorbed)" annotation(
    Dialog(tab = "Animation", group = "if animation = true", enable = animate));
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape cylinder(shapeType = "cylinder", color = {63, 63, 63}, specularCoefficient = specularCoefficient, length = width, width = radius*2, height = radius*2, lengthDirection = {-e0[2], e0[1], 0}, widthDirection = {0, 0, 1}, r_shape = -0.03*{-e0[2], e0[1], 0}, r = Modelica.Mechanics.MultiBody.Frames.resolve1(planarWorld.R, {frame_a.x, frame_a.y, zPosition}) + planarWorld.r_0, R = planarWorld.R) if planarWorld.enableAnimation and animate;
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape rim1(shapeType = "cylinder", color = {195, 195, 195}, specularCoefficient = specularCoefficient, length = radius*2, width = diameter, height = diameter, lengthDirection = {0, 0, 1}, widthDirection = {1, 0, 0}, r_shape = {0, 0, -radius}, r = Modelica.Mechanics.MultiBody.Frames.resolve1(planarWorld.R, {frame_a.x, frame_a.y, zPosition}) + planarWorld.r_0, R = Modelica.Mechanics.MultiBody.Frames.absoluteRotation(planarWorld.R, Modelica.Mechanics.MultiBody.Frames.planarRotation({-e0[2], e0[1], 0}, flange_a.phi, 0))) if planarWorld.enableAnimation and animate;
  Modelica.Mechanics.MultiBody.Visualizers.Advanced.Shape rim2(shapeType = "cylinder", color = {195, 195, 195}, specularCoefficient = specularCoefficient, length = radius*2, width = diameter, height = diameter, lengthDirection = {0, 0, 1}, widthDirection = {1, 0, 0}, r_shape = {0, 0, -radius}, r = Modelica.Mechanics.MultiBody.Frames.resolve1(planarWorld.R, {frame_a.x, frame_a.y, zPosition}) + planarWorld.r_0, R = Modelica.Mechanics.MultiBody.Frames.absoluteRotation(planarWorld.R, Modelica.Mechanics.MultiBody.Frames.planarRotation({-e0[2], e0[1], 0}, flange_a.phi + Modelica.Constants.pi/2, 0))) if planarWorld.enableAnimation and animate;
  Modelica.Blocks.Interfaces.RealOutput outRollTorque annotation(
    Placement(visible = true, transformation(origin = {0, 100}, extent = {{-10, -10}, {10, 10}}, rotation = 90), iconTransformation(origin = {100, -90}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  R = {{cos(frame_a.phi), -sin(frame_a.phi)}, {sin(frame_a.phi), cos(frame_a.phi)}};
  e0 = R*e;
  v = der({frame_a.x, frame_a.y});
  phi_roll = flange_a.phi;
  w_roll = der(phi_roll);
  v_long = v*e0;
  v_lat = -v[1]*e0[2] + v[2]*e0[1];
  v_slip_lat = v_lat - 0;
  v_slip_long = v_long - radius*w_roll;
  v_slip = sqrt(v_slip_long^2 + v_slip_lat^2 + 0.0000000001);
  -f_long*radius = flange_a.tau;
  frame_a.t = 0;
  vAdhesion = noEvent(max(sAdhesion*abs(radius*w_roll), vAdhesion_min));
  vSlide = noEvent(max(sSlide*abs(radius*w_roll), vSlide_min));
  fN = max(0, N + dynamicLoad);
  f = fN*noEvent(PlanarMechanics.Utilities.Functions.limitByStriple(vAdhesion, vSlide, mu_A, mu_S, v_slip));
  f_long = f*v_slip_long/v_slip;
  f_lat = f*v_slip_lat/v_slip;
  f_long = {frame_a.fx, frame_a.fy}*e0;
  f_lat = {frame_a.fy, -frame_a.fx}*e0;
  lossPower = f*v_slip;
  // Rolling resistance
  f_roll = -cr*fN*(2/(1 + Modelica.Math.exp(-v_long/(0.01*v0_roll)))-1);
  torque_roll = f_roll*radius;
  outRollTorque = torque_roll;
  annotation(
    Documentation(info = "<html>
<p>
The ideal wheel joint models the behavior of a&nbsp;wheel rolling on&nbsp;a x,y-plane
whose contact patch has slip-dependent friction characteristics. This is an
approximation for wheels with a&nbsp;rim and a&nbsp;rubber tire.
</p>
<p>
The force depends with friction characteristics on the <strong>slip</strong>.
The <strong>slip</strong> is split into two components:
</p>
<ul>
  <li>lateral slip: the lateral velocity divided by the rolling velocity.</li>
  <li>longitudinal slip: the longitudinal slip velocity divided by the rolling velocity.</li>
</ul>
<p>
For low rolling velocity this definitions become ill-conditioned.
Hence a&nbsp;dry-friction model is used for low rolling velocities.
</p>
<p>
The radius of the wheel can be specified by the parameter <strong>radius</strong>.
The driving direction (for phi&nbsp;=&nbsp;0) can be specified by the
parameter&nbsp;<strong>r</strong>. The normal load is set &nbsp;<strong>N</strong>.
</p>
<p>
The wheel contains a&nbsp;2D connector <strong>frame_a</strong> for the steering
on the plane. The rolling motion of the wheel can be actuated by the 1D connector
<strong>flange_a</strong>.
</p>
<p>
In addition there is an input for a&nbsp;dynamic component of the normal load.
</p>
<p>
For examples of usage see the local
<a href=\"modelica://PlanarMechanics.VehicleComponents.Examples\">Examples package</a>.
</p>
</html>", revisions = "<html>
<p>
<img src=\"modelica://PlanarMechanics/Resources/Images/dlr_logo.png\" alt=\"DLR logo\">
<strong>Developed 2010 at the DLR Institute of System Dynamics and Control</strong>
</p>
</html>"),
    Icon(graphics = {Rectangle(fillColor = {231, 231, 231}, fillPattern = FillPattern.HorizontalCylinder, extent = {{100, 10}, {30, -10}}), Rectangle(lineColor = {32, 32, 32}, fillColor = {175, 175, 175}, fillPattern = FillPattern.HorizontalCylinder, extent = {{40, -100}, {-40, 100}}, radius = 20), Line(points = {{-30, 90}, {30, 90}}, color = {95, 95, 95}), Line(points = {{-30, 80}, {30, 80}}, color = {95, 95, 95}), Line(points = {{-30, 60}, {30, 60}}, color = {95, 95, 95}), Line(points = {{-30, 30}, {30, 30}}, color = {95, 95, 95}), Line(points = {{-30, -30}, {30, -30}}, color = {95, 95, 95}), Line(points = {{-30, -60}, {30, -60}}, color = {95, 95, 95}), Line(points = {{-30, -80}, {30, -80}}, color = {95, 95, 95}), Line(points = {{-30, -90}, {30, -90}}, color = {95, 95, 95}), Text(extent = {{-150, -30}, {150, -60}}, textString = "radius=%radius"), Text(textColor = {0, 0, 255}, extent = {{-150, 140}, {150, 100}}, textString = "%name")}, coordinateSystem(extent = {{-100, -100}, {100, 100}})),
    uses(Modelica(version = "4.0.0")));
end WheelWithSlip;
