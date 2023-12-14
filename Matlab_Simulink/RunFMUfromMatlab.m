%% Simulate the FMU

inSteering = .1;
inTorqueLeft = 10;
inTorqueRight = 10;

model = "RunFMUfromMatlabFMU";

% Solver settings
T = .01;
time = T:T:10;
options = simset('Solver', 'ode45', 'FixedStep', T);


% Preallocate variables to store simulation results
results = zeros(length(time), 3); % Adjust numOutputs based on your model

% Simulate the model step by step
for i = 1:length(time)
    % Set current time and other inputs if needed
    currentTime = time(i);
    % Update input values or other parameters as needed
    
    % Simulate the model for the current time step
    simOut = sim(model, 'SimulationMode', 'normal', 'SrcWorkspace', 'current', 'TimeOut', currentTime);

    % Store the results
    results(i, :) = [simOut.angularVel, simOut.carVelocity, simOut.steering]; % Replace with the actual output variable name
end
