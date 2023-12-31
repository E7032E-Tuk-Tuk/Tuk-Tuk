g = 9.8;
dragCoeff = 0.5;

mass = 420;
Izz = 150; % Yaw moment of inertia

frontTrackWidth = 1.0;
rearTrackWidth = 1.0;
Lf = 1.5; % Distance COM - front axle
Lr = 0.5; % Distance COM - rear axle
L = Lf + Lr; % Wheelbase
h = 0.10; % Height of COM

gearRatio = 7;

% Front tire
wheelRadiusF = 0.28;
inertiaF = 0.3;
rollResF = 0.03;
muAF = 1.0;
muSF = 0.85;
sAdF = 0.15;
sSlF = 0.25;
vAdF = 0.1;
vSlF = 0.3;

% Rear left tire
wheelRadiusL = 0.28;
inertiaL = 0.3;
rollResL = 0.03;
muAL = 1.0;
muSL = 0.85;
sAdL = 0.15;
sSlL = 0.25;
vAdL = 0.1;
vSlL = 0.3;

% Rear right tire
wheelRadiusR = 0.28;
inertiaR = 0.3;
rollResR = 0.03;
muAR = 1.0;
muSR = 0.85;
sAdR = 0.15;
sSlR = 0.25;
vAdR = 0.1;
vSlR = 0.3;

%%
c_f_nom = 12e3; % Front tires cornering stiffness (at nominal vertical load)
c_r_nom = 15e3; % Rear tires cornering stiffness (at nominal vertical load)
Fznom = 5000; % Nominal vertical load
sigma_f = 0.1; % Front tires relaxation length
sigma_r = 0.1; % Rear tires relaxation length

c_f_bcycle = c_f_nom*Lr*mass*g / (L*Fznom); % Front tire cornering stiffness for bicycle model
c_r_bcycle = c_f_nom*Lf*mass*g / (L*Fznom); % Rear tire cornering stiffness for bicycle model