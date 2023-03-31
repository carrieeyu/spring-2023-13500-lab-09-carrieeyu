#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"
#include <cmath>

Coord3D pointP = {10, 20, 30};
Coord3D pointQ = {-20, 21, -22};

//task A: Romputes the distance from the origin to the point P
TEST_CASE("Length & Distance"){
  //CHECK(length(&pointP) == 37.4166); //returns failure in doctest although the values are equal
  CHECK(length(&pointP) == sqrt(pow(10, 2) + pow(20, 2) + pow(30, 2))); //result of this is prints 37.4166
  
}

//task B: Returns the pointer of the point that is farther away from the origin
TEST_CASE("Point from Origin"){
  CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP); //comparing P and Q; P should be further
  
}

//task C: Should update the object’s position ppos with its new position coordinates after the time interval dt
TEST_CASE("Velocity & Moving Objects"){
  //from main
  Coord3D pos = {0, 0, 100.0}; 
  Coord3D vel = {1, -5, 0.2};

  move(&pos, &vel, 2.0); //previous func that compute object’s new coordinates after the time interval dt

  //implementing move fun
  CHECK((pos.x) == 2); //(0+1*2.0)=2 for position of x
  CHECK((pos.y) == -10); //(0+(-5)*2.0)=-10 for position of y
  CHECK((pos.z) == 100.4); //(100.0+0.2*2.0) for position of z
}

//task E: Add functions that create, delete, and coordinate objects dynamically

TEST_CASE("Creating and deleting objects dynamically"){
  //from main
  Coord3D *ppos = createCoord3D(10.0, 20.0, 30.0); //x,y,z respectively

  CHECK((*ppos).x == 10.0);
  CHECK((*ppos).y == 20.0);
  CHECK((*ppos).z == 30.0);

  //from main
  Coord3D *pvel = createCoord3D(5.5, -1.4, 7.77); //x,y,z respectively

  CHECK((*pvel).x == 5.5);
  CHECK((*pvel).y == -1.4);
  CHECK((*pvel).z == 7.77);
  
}

