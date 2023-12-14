close all

slipRatioLeft = out.SlipRatio{2}.Values.Data;
FxLeft = squeeze(out.RearForce{1}.Values.Data(1,:,:));
FzLeft = squeeze(out.RearForce{3}.Values.Data(1,:,:));
figure
plot(slipRatioLeft, FxLeft ./ FzLeft, LineWidth=1.5)
xlim([-0.5 0.5])
ylim([-1.1 1.1])
xlabel('\lambda (slip ratio)', FontSize=12)
ylabel('F_x / F_z', FontSize=12)
grid on