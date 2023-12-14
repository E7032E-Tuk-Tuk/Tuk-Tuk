close all

slipAngleFront = out.SlipAngles{1}.Values.Data;
FyFront = squeeze(out.FrontForce{2}.Values.Data);
FzFront = squeeze(out.FrontForce{3}.Values.Data);

figure
plot(slipAngleFront, FyFront ./ FzFront, LineWidth=1.5)
xlim([-0.31 0.31])
ylim([-1 1])
title("Lateral force vs slip angle, front wheel", FontSize=14)
xlabel('\alpha_f (slip angle, rad)', FontSize=12)
ylabel('F_y / F_z', FontSize=12)
grid on