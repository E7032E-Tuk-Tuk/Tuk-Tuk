model WeightTransfer
extends Modelica.Blocks.Interfaces.MO(nout=3);

  Modelica.Units.SI.Force Fzf "N Front weigt force";
  Modelica.Units.SI.Force Fzr "N Rear weight force";
  Modelica.Units.SI.Force Fzrl "N Rear left weight force";
  Modelica.Units.SI.Force Fzrr "N Rear right weight force";
  
  input Modelica.Units.SI.Velocity v[2] "m/s Velocity in car frame";
  input Modelica.Units.SI.Acceleration a[2] "m/s2 Acceleration in car frame";
  input Modelica.Units.SI.AngularVelocity w "rad/s Angular velocity of the car";
  
  parameter Modelica.Units.SI.Mass m "kg Mass of vehicle";
  parameter Modelica.Units.SI.Height h "m Height of CoM";
  parameter Modelica.Units.SI.Length L "m Length of car, wheelbase";
  parameter Modelica.Units.SI.Length Wr "m Rear track width of car";
  

equation

  Fzf = -(a[1] - v[2]*w)*m*h / L;
  Fzr = -Fzf;
  Fzrl = Fzr/2 + m*h/Wr*(a[2] + v[1]*w);
  Fzrr = Fzr/2 - m*h/Wr*(a[2] + v[1]*w);
  
  y[1] = Fzf;
  y[2] = Fzrl;
  y[3] = Fzrr;

end WeightTransfer;
