block OnOffControl "Single Input Single Output continuous control block"
  extends Modelica.Blocks.Interfaces.MISO(final nin=2);
  
  parameter Real maxOutput = 10 "Maximal output signal";
  parameter Real eps = 0.0001 "Maximum deviation from setpoint";
  annotation (Documentation(info="<html>
<p>
Block has a vector of continuous Real input signals and
one continuous Real output signal. The first input is the variable setpoint, 
the second input is the real process value. If PV is > +- eps, y := +- maxOutput.
</p>
</html>"));
equation
  if u[2] > eps + u[1] then
    y = -maxOutput;
  elseif u[2] < u[1] - eps then
    y = maxOutput;
  else
    y = 0;
  end if;
  
end OnOffControl;
