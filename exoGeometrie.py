#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  exoGeometrie1.py
#  
#  Copyright 2017 BlackAllSun <attilavlh10@gmail.com>
#  
#  

import numpy as np
import matplotlib.pyplot as plt
from math import *
x=np.array([1,3],float);
y=np.array([1.5,0.5],float);
def fonctionPerso(a,b,c,x):
	return -(a*x+c)/b;

xFunct=np.array([-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,3,4,5,6,7,8,9,10],int);
yFunct1=fonctionPerso(.5,1,-2,xFunct);
yFunct2=fonctionPerso(2,1,-1,xFunct);
print(xFunct);
print(yFunct1);
print(yFunct2);
#np.linalg.solve(x,y);
plt.figure();
plt.plot(xFunct,yFunct1,"rv--",label="f1(x)");
plt.plot(xFunct,yFunct2,"rv--",label="f2(x)");
plt.plot(x,y,'b:o',label='v(x)');
plt.legend(loc='lower right');
plt.xlabel('abscisses');
plt.ylabel('ordonnees');
plt.title('Exo Geometrie 1');
plt.show();
plt.savefig('toto.png');
