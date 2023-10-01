g = 9.8;

mass = 2000;
Izz = 4000; % Yaw moment of inertia

frontTrackWidth = 1.4;
rearTrackWidth = 1.4;
Lf = 1.4; % Distance COM - front axle
Lr = 1.6; % Distance COM - rear axle
L = Lf + Lr; % Wheelbase
h = 0.35; % Vertical distance COM - axle plane

c_f_nom = 12e3; % Front tires cornering stiffness (at nominal vertical load)
c_r_nom = 15e3; % Rear tires cornering stiffness (at nominal vertical load)
Fznom = 5000; % Nominal vertical load
sigma_f = 0.1; % Front tires relaxation length
sigma_r = 0.1; % Rear tires relaxation length

c_f_bcycle = c_f_nom*Lr*mass*g / (L*Fznom); % Front tire cornering stiffness for bicycle model
c_r_bcycle = c_f_nom*Lf*mass*g / (L*Fznom); % Rear tire cornering stiffness for bicycle model