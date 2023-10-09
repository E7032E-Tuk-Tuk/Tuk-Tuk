%%% Read csv data from OpenModelica and plot it

table = readtable('lateralForceVSslipAngle1.csv');

%% Plot

plot(table.slipAngleFrontWheel, table.forceFrontWheel_1_2_,'ro', table.slipAngleRearLeftWheel, table.forceRearLeftWheel_1_2_, 'bo', table.slipAngleRearRightWheel, table.forceRearRightWheel_1_2_,'go')
xlabel('Slip angle [rad]')
ylabel('Lateral force [N]')
legend('Front wheel', 'Rear left', 'Rear right')

%% Cornering stiffness

C = polyfit(table.slipAngleRearLeftWheel/pi*180, table.forceRearLeftWheel_1_2_, 1)
C2 = polyfit(table.slipAngleFrontWheel/pi*180, table.forceFrontWheel_1_2_, 1)

