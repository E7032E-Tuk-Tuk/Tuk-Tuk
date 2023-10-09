block SteeringControl "Double Input Single Output continuous PI-control block"
  extends Modelica.Blocks.Interfaces.MISO(final nin = 2);
  parameter Real p = 10 "Propotional";
  parameter Real i = 1 "Integral";
  Real e(start=0);
  Real E(start=0);
equation
  e = u[1] - u[2];
  der(E) = e;
  y = p * e + i * E;
  annotation(
    Documentation(info = "<html>
<p>
Block has a vector of continuous Real input signals and
one continuous Real output signal. The first input is the variable setpoint, 
the second input is the real process value.
</p>
</html>"));
end SteeringControl;
