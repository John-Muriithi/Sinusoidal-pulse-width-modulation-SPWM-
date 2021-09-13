clc;clear;close all;
t = 0:0.00001:0.04; %period T = 1/50Hz = 0.02sec
f_r = 50; %sinusoidal reference frequency = 50Hz
m_f = 7; %freq modulation ratio is 7
f_c = m_f*f_r; %triangular carrier frequency f_c = m_f*f_r
m_a = 0.5; %amplitude modulation ratio is 2/3
tri_y = sawtooth(2*pi*f_c*t,0.5); %triangular carrier waveform
sin_x1 = m_a*sin(2*pi*f_r*t); % phase 1 sinusoidal reference waveform
sin_x2 = m_a*sin(2*pi*f_r*t + (2*pi/3)); % phase 2 sinusoidal reference waveform
sin_x3 = m_a*sin(2*pi*f_r*t - (2*pi/3)); % phase 3 sinusoidal reference waveform
[x1i,y1i,] = polyxpoly(t,sin_x1,t,tri_y);
[x2i,y2i,] = polyxpoly(t,sin_x2,t,tri_y);
[x3i,y3i,] = polyxpoly(t,sin_x3,t,tri_y);
figure()
plot(t,tri_y,t,sin_x1,x1i,y1i,'b*');hold on;
plot(t,tri_y,t,sin_x2,x2i,y2i,'*');hold on;
plot(t,tri_y,t,sin_x3,x3i,y3i,'r*');hold off;
title('SINUSOIDAL PULSE WIDTH MODULATION (SPWM)')
legend('','phase 1 sinusoidal Reference','Phase 1 intersection points','','phase 2 sinusoidal Reference','Phase 2 intersection points','Triangular carrier','phase 3 sinusoidal Reference','Phase 3 intersection points')
display(x1i); display(x2i); display(x3i);

