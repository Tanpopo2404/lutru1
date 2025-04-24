
%%%%%%%%%%%%%
% D? li?u th?i gian (s)
time = [0; 300; 500; 900; 1000; 4000; 5000];

% D? li?u t?c ?? (km/h -> ??i sang m/s)
speed_kmh = [0; 60; 60; 90; 60; 80; 0];
speed = speed_kmh / 3.6; % m/s

% T?o struct ?úng ??nh d?ng Signal Editor
sigdata.time = time;
sigdata.signals.values = speed;
sigdata.signals.dimensions = 1;
sigdata.signals.label = 'Speed';
sigdata.signals.blockName = 'From Signal Editor';

% L?u ra file .mat
save('speed_input_day5.mat', 'sigdata');