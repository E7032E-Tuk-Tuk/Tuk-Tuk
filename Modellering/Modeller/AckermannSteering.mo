model AckermannSteering
extends Modelica.Blocks.Interfaces.SIMO(final nout=2);
  parameter Real L;
  parameter Real W;
equation
  y[1] = atan(L / (L/tan(u) -  W/2));
  y[2] = atan(L / (L/tan(u) + W/2));
end AckermannSteering;
