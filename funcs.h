#pragma once
#include "coord3d.h"

//task A
double length(Coord3D *p);

//task B
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2);

//task C
void move(Coord3D *ppos, Coord3D *pvel, double dt);

//task E
Coord3D* createCoord3D(double x, double y, double z);
void deleteCoord3D(Coord3D *p);
