model BLDCmotor "Test example: Brushless DC machine drive"
  extends Modelica.Icons.Example;
  import Modelica.Units.SI;
  import Modelica.Constants.pi;
  import BLDC;
  parameter SI.Voltage VDC = smpmData.VsNominal*Modelica.Electrical.Polyphase.Functions.factorY2DC(smpmData.m) "Nominal DC voltage";
  parameter SI.Inertia JLoad = smpmData.Jr "Load inertia";
  Modelica.Mechanics.Rotational.Interfaces.Flange_a flange_a annotation(
    Placement(visible = true, transformation(origin = {120, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 0), iconTransformation(origin = {110, 0}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Interfaces.RealInput voltageIn annotation(
    Placement(visible = true, transformation(origin = {-62, -40}, extent = {{-20, -20}, {20, 20}}, rotation = 0), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}, rotation = 0)));
  Modelica.Electrical.Machines.Utilities.MultiTerminalBox terminalBox(m = smpmData.m, terminalConnection = "Y") annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{10, -34}, {30, -14}}, rotation = 0)));
  Modelica.Electrical.Analog.Basic.Ground ground annotation(
    Placement(visible = true, transformation(origin = {0, 40}, extent = {{-10, -10}, {10, 10}}, rotation = 270)));
  BLDC.Utilities.MeasurementTrigger measurementTrigger(m = smpmData.m) annotation(
    Placement(visible = true, transformation(origin = {80, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 180)));
  Modelica.Electrical.Analog.Sources.SignalVoltage signalVoltage annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{30, 60}, {10, 80}}, rotation = 0)));
  BLDC.Utilities.ElectronicCommutator electronicCommutator(m = smpmData.m) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{-20, 10}, {0, 30}}, rotation = 0)));
  Modelica.Electrical.Polyphase.Basic.Star star(m = smpmData.mSystems) annotation(
    Placement(visible = true, transformation(origin = {0, -40}, extent = {{-10, -10}, {10, 10}}, rotation = 270)));
  BLDC.ToMSL.TriggeredMean triggeredMeanDC annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{50, 40}, {70, 60}}, rotation = 0)));
  BLDC.ToMSL.TriggeredMean triggeredMeanAC annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{50, 0}, {70, -20}}, rotation = 0)));
  Modelica.Magnetic.FundamentalWave.BasicMachines.SynchronousMachines.SM_PermanentMagnet smpm(Jr = smpmData.Jr, Js = smpmData.Js, Lmd = smpmData.Lmd, Lmq = smpmData.Lmq, Lrsigmad = smpmData.Lrsigmad, Lrsigmaq = smpmData.Lrsigmaq, Lssigma = smpmData.Lssigma, Lszero = smpmData.Lszero, Rrd = smpmData.Rrd, Rrq = smpmData.Rrq, Rs = smpmData.Rs, TrOperational = smpmData.TrNominal, TrRef = smpmData.TrRef, TsOperational = smpmData.TsNominal, TsRef = smpmData.TsRef, VsOpenCircuit = smpmData.VsOpenCircuit, alpha20r = smpmData.alpha20r, alpha20s = smpmData.alpha20s, frictionParameters = smpmData.frictionParameters, fsNominal = smpmData.fsNominal, m = smpmData.m, p = smpmData.p, permanentMagnetLossParameters = smpmData.permanentMagnetLossParameters, phiMechanical(fixed = true), statorCoreParameters = smpmData.statorCoreParameters, strayLoadParameters = smpmData.strayLoadParameters, useDamperCage = smpmData.useDamperCage, wMechanical(fixed = true)) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{10, -50}, {30, -30}}, rotation = 0)));
  Modelica.Electrical.Analog.Sensors.CurrentSensor currentSensor annotation(
    Placement(visible = true, transformation(origin = {30, 50}, extent = {{10, -10}, {-10, 10}}, rotation = 90)));
  Modelica.Electrical.PowerConverters.DCAC.Polyphase2Level inverter(m = smpmData.m) annotation(
    Placement(visible = true, transformation(origin = {20, 20}, extent = {{-10, -10}, {10, 10}}, rotation = 270)));
  Modelica.Electrical.Polyphase.Sensors.CurrentQuasiRMSSensor currentRMSSensor(m = smpmData.m) annotation(
    Placement(visible = true, transformation(origin = {20, -10}, extent = {{10, -10}, {-10, 10}}, rotation = 90)));
  BLDC.Sensors.HallSensor hallSensor(m = smpmData.m, p = smpmData.p) annotation(
    Placement(visible = true, transformation(origin = {40, -60}, extent = {{-10, 10}, {10, -10}}, rotation = 90)));
  parameter BLDC.ParameterRecords.SmpmData smpmData(m = 5) annotation(
    Placement(visible = true, transformation(origin = {0, 0}, extent = {{10, -80}, {30, -60}}, rotation = 0)));
initial equation
  smpm.is[1:2] = zeros(2);
equation
  connect(inverter.ac, currentRMSSensor.plug_p) annotation(
    Line(points = {{20, 10}, {20, 0}}, color = {0, 0, 255}));
  connect(hallSensor.yC, electronicCommutator.uC) annotation(
    Line(points = {{40, -71}, {40, -90}, {-10, -90}, {-10, 8}}, color = {255, 0, 255}));
  connect(electronicCommutator.fire_p, inverter.fire_p) annotation(
    Line(points = {{1, 26}, {8, 26}}, color = {255, 0, 255}));
  connect(electronicCommutator.fire_n, inverter.fire_n) annotation(
    Line(points = {{1, 14}, {8, 14}}, color = {255, 0, 255}));
  connect(star.plug_p, terminalBox.starpoint) annotation(
    Line(points = {{0, -30}, {0, -30}, {0, -28}, {10, -28}}, color = {0, 0, 255}));
  connect(currentSensor.n, inverter.dc_p) annotation(
    Line(points = {{30, 40}, {26, 40}, {26, 30}}, color = {0, 0, 255}));
  connect(currentRMSSensor.I, triggeredMeanAC.u) annotation(
    Line(points = {{31, -10}, {48, -10}}, color = {0, 0, 127}));
  connect(hallSensor.yC, measurementTrigger.u) annotation(
    Line(points = {{40, -71}, {40, -90}, {100, -90}, {100, 20}, {92, 20}}, color = {255, 0, 255}));
  connect(measurementTrigger.y, triggeredMeanAC.trigger) annotation(
    Line(points = {{69, 20}, {60, 20}, {60, 2}}, color = {255, 0, 255}));
  connect(ground.p, inverter.dc_n) annotation(
    Line(points = {{10, 40}, {14, 40}, {14, 30}}, color = {0, 0, 255}));
  connect(smpm.flange, hallSensor.flange) annotation(
    Line(points = {{30, -40}, {40, -40}, {40, -50}}));
  connect(currentSensor.i, triggeredMeanDC.u) annotation(
    Line(points = {{41, 50}, {48, 50}}, color = {0, 0, 127}));
  connect(currentRMSSensor.plug_n, terminalBox.plugSupply) annotation(
    Line(points = {{20, -20}, {20, -28}}, color = {0, 0, 255}));
  connect(signalVoltage.p, currentSensor.p) annotation(
    Line(points = {{30, 70}, {30, 60}}, color = {0, 0, 255}));
  connect(terminalBox.plug_sn, smpm.plug_sn) annotation(
    Line(points = {{14, -30}, {14, -30}}, color = {0, 0, 255}));
  connect(measurementTrigger.y, triggeredMeanDC.trigger) annotation(
    Line(points = {{69, 20}, {60, 20}, {60, 38}}, color = {255, 0, 255}));
  connect(terminalBox.plug_sp, smpm.plug_sp) annotation(
    Line(points = {{26, -30}, {26, -30}}, color = {0, 0, 255}));
  connect(signalVoltage.n, ground.p) annotation(
    Line(points = {{10, 70}, {10, 40}}, color = {0, 0, 255}));
  connect(flange_a, smpm.flange) annotation(
    Line(points = {{120, -40}, {30, -40}}));
  connect(signalVoltage.v, voltageIn) annotation(
    Line(points = {{20, 82}, {-62, 82}, {-62, -40}}, color = {0, 0, 127}));
  annotation(
    experiment(StopTime = 2, Interval = 1e-05, Tolerance = 1e-06),
    Documentation(info = "<html>
<p>
A permanent magnet synchronous machine is fed from a variable DC voltage source. 
The fire signals of the inverter bridge are determined from the output signals of the hall sensor. 
Thus the currents are electronically commutated from one phase to the next. 
After the machine ha accelerated, a load torque step is applied.
</p>
<p>
Plot the machine's speed <code>smpm.wMechanical</code>, the electrical torque <code>smpm.tauElectrical</code> and the quasi-RMS current <code>quasiRMSsensor.I</code>. 
Note that - if the reference voltage reaches <code>VDC</code> - full constant DC voltage without switching (except the commutation) is applied.
</p>
<h4>Note:</h4>
<p>
The spatial distribution of the magnetic field of the permanent magnet rotor is sinusoidal. 
Therefore the induced voltage is sinusoidal w.r.t. to time. 
A machine design with rectangular spatial field distribution leads to trapezoidal induced voltage. 
Such a design might be better suited for usage as brushless DC machine.
However, such a machine model is not yet available.
</p>
</html>"),
    uses(BLDC(version = "1.9.0"), Modelica(version = "4.0.0")),
  Diagram(coordinateSystem(extent = {{-80, 100}, {140, -100}})),
  version = "");
end BLDCmotor;
