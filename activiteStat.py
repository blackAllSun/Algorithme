#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  activiteStat.py
#  
#  Copyright 2017 BlackAllSun <attilavlh10@gmail.com>
#  
from pylab import *
tabTempsParcours=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,35,38,40,45,50,55,60,90];
tabEffectifs=[2,4,5,4,6,1,9,2,8,20,10,1,5,4,2,3,1,10,14,40,20,6,10,3,4,8,10,10,2,11,1,3,1,4,1,1,1,1,2];
x = array(tabTempsParcours);
y = array(tabEffectifs);
tabEffectifsTranche=[61,90,84,5,	5,	2,	1,	0,	2];
xTranche= array(	[0,	10,20,30,	40,	50,	60,	70,80]);
yTranche = array(tabEffectifsTranche);
plot(x, y);
plot(xTranche, yTranche);

somme=0.0;
moyenne=0.0;
for i in range(len(tabTempsParcours)):
	somme+=tabTempsParcours[i]*tabEffectifs[i];
	moyenne=somme/250;
	print(somme," ",moyenne);
for i in range(8):
    x_rect = [xTranche[i], xTranche[i], xTranche[i+1], xTranche[i+1], xTranche[i]]; # abscisses des sommets
    y_rect = [0   , yTranche[i], yTranche[i]  , 0     , 0   ]; # ordonnees des sommets
    plt.plot(x_rect, y_rect,"r");
plt.show();
