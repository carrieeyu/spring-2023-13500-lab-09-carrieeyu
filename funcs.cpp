#include <iostream>
#include "funcs.h"
#include "coord3d.h"
#include <cmath>

/*
task A:
Write a program 3d-space.cpp, in which you define a function length() that receives the coordinates of a point P passed as a pointer, and computes the distance from the origin to the point

sqrt(x^2+y^2+z^2)
*/
double length(Coord3D *p){

  double xSq = pow((*p).x, 2.0); //pow = x to the power of 2.0
  double ySq = pow((*p).y, 2.0);
  double zSq = pow((*p).z, 2.0);

  double distance = sqrt(xSq + ySq + zSq); //square root of the sum of the squares from x,y,z

  return distance;
}

/*
task B:
Returns the pointer of the point that is farther away from the origin, out of the coordinates of two points (passed as pointers)
*/
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){

  double pAddress = length(p1); //address of point P
  double qAddress = length(p2); //address of point Q

  if(pAddress > qAddress){ //if the address of P > the address of Q,
    return p1; //return the address of P
  }
  return p2; //otherwise, return address of Q

}

/*
task C:
Should update the object’s position ppos with its new position coordinates after the time interval dt
*/
void move(Coord3D *ppos, Coord3D *pvel, double dt){
  
  (*ppos).x = (*ppos).x + (*pvel).x * dt; //updates current pos x with (x pos)+(velocity)+(time interval)
  (*ppos).y = (*ppos).y + (*pvel).y * dt;
  (*ppos).z = (*ppos).z + (*pvel).z * dt;
}

/*
task E:
Add functions that create, delete, and coordinate objects dynamically
*/

// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z){

  Coord3D *dynamicNew = new Coord3D; //creating a new object 

  (*dynamicNew).x = x;
  (*dynamicNew).y = y;
  (*dynamicNew).z = z;

  return dynamicNew;
}

// free memory
void deleteCoord3D(Coord3D *p){
  delete p;
}

