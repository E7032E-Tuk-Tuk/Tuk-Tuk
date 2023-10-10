%%% Read csv data from OpenModelica and plot it

table = readtable('lateralForceVSslipAngle3.csv');

%% Plot

plot(table.slipAngleFrontWheel, table.forceFrontWheel_1_2_,'ro', table.slipAngleRearLeftWheel, table.forceRearLeftWheel_1_2_, 'bo', table.slipAngleRearRightWheel, table.forceRearRightWheel_1_2_,'go')
xlabel('Slip angle [rad]')
ylabel('Lateral force [N]')
legend('Front wheel', 'Rear left', 'Rear right')

%% Cornering stiffness
x1 = table.slipAngleRearLeftWheel/pi*180;
y1 = table.forceRearLeftWheel_1_2_;
x2 = table.slipAngleFrontWheel/pi*180;
y2 = table.forceFrontWheel_1_2_;


C = polyfit(x1(500*2/5:500,1), y1(500*2/5:500,1), 1)
C2 = polyfit(x2(500*2/5:500,1), y2(500*2/5:500,1), 1)

