block SineWithDwell "Generate sine with Dwell signal"
  import Modelica.Constants.pi;
  parameter Real amplitude=1 "Amplitude of sine wave";
  parameter Real delayTime=0.5 "Delay time";
  annotation(Dialog(groupImage="modelica://Modelica/Resources/Images/Blocks/Sources/Sine.png"));
  parameter Modelica.Units.SI.Frequency f(start=0.7) "Frequency of sine wave";
  final parameter Modelica.Units.SI.Angle phase=3*pi/2 "Phase of sine wave after delay";
  extends Modelica.Blocks.Interfaces.SignalSource(final offset = 0);
equation
  if time < startTime then
    y = 0;
  elseif time < 3/4/f then
    y = offset + amplitude*Modelica.Math.sin(2*pi*f*(time - startTime));
  elseif time < 3/4/f + delayTime then
    y = -amplitude;
  elseif time < 1/f + delayTime then
    y = offset + amplitude*Modelica.Math.sin(2*pi*f*(time - (3/4/f+delayTime) - startTime) + phase);
  else
    y = 0;
  end if;
  annotation (
    Icon(coordinateSystem(
        preserveAspectRatio=true,
        extent={{-100,-100},{100,100}}), graphics={
        Line(points={{-80,68},{-80,-80}}, color={192,192,192}),
        Polygon(
          points={{-80,90},{-88,68},{-72,68},{-80,90}},
          lineColor={192,192,192},
          fillColor={192,192,192},
          fillPattern=FillPattern.Solid),
        Line(points={{-90,0},{68,0}}, color={192,192,192}),
        Polygon(
          points={{90,0},{68,8},{68,-8},{90,0}},
          lineColor={192,192,192},
          fillColor={192,192,192},
          fillPattern=FillPattern.Solid),
        Line(points={{-80,0},{-68.7,34.2},{-61.5,53.1},{-55.1,66.4},{-49.4,
              74.6},{-43.8,79.1},{-38.2,79.8},{-32.6,76.6},{-26.9,69.7},{-21.3,
              59.4},{-14.9,44.1},{-6.83,21.2},{10.1,-30.8},{17.3,-50.2},{23.7,
              -64.2},{29.3,-73.1},{35,-78.4},{40.6,-80},{46.2,-77.6},{51.9,-71.5},
              {57.5,-61.9},{63.9,-47.2},{72,-24.8},{80,0}}, smooth = Smooth.Bezier),
        Text(
          extent={{-147,-152},{153,-112}},
          textString="f=%f")}),
    Documentation(info="<html>
<p>
The Real output y is a sine signal:
</p>

<p>
<img src=\"modelica://Modelica/Resources/Images/Blocks/Sources/Sine.png\"
   alt=\"Sine.png\">
</p>
</html>"));
end SineWithDwell;
