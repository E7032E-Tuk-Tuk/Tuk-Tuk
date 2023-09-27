block PID "Continuous PID"
  parameter Real P=1 "Propotional";
  parameter Real I=0 "Integral";
  parameter Real setpoint = 0 "Setpoint of the PID";
  Real e(start=0); // Error
  Real intE(start=0); // Integral of error
  input Real signal; // Real signal

  //parameter SI.Time duration(min=0.0, start=0) "Start-time of controller";
  extends Modelica.Blocks.Interfaces.SO;

equation
  e = setpoint - signal;
  der(intE) = e;
  y = P*e + I*intE;
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
        Line(points={{-90,-70},{82,-70}}, color={192,192,192}),
        Polygon(
          points={{90,-70},{68,-62},{68,-78},{90,-70}},
          lineColor={192,192,192},
          fillColor={192,192,192},
          fillPattern=FillPattern.Solid),
        Line(points={{-80,-70},{-40,-70},{31,38}}),
        Text(
          extent={{-150,-150},{150,-110}},
          textString="duration=%duration"),
        Line(points={{31,38},{86,38}})}),
    Documentation(info="<html>
<p>
The Real output y is the PID output
</p>

</html>"));

end PID;
