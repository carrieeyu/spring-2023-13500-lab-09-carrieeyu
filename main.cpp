#include <iostream>
#include "funcs.h"

int main() {

  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};
  //Coord3D vel = {5, -3, 1};

  //to visualize actual length
  /*
  std:: cout << "Length of P: " << length(&pointP) << std:: endl; //37
  std:: cout << "Length of Q: " << length(&pointQ) << std:: endl; //36
  */

  //task A
  std:: cout << "(A)" << std:: endl;
  std:: cout << "Distance from P origin to P: " << length(&pointP) << "\n" << std:: endl; //prints 37.4166
  std:: cout << "----------------------------------------------" << std:: endl;

  //task B
  std:: cout << "(B)" << std:: endl;
  std:: cout << "P Address: " << &pointP << std:: endl; //last four: 84e0
  std:: cout << "Q Address: " << &pointQ << std:: endl; //last four: 8500
  
  Coord3D * ans = fartherFromOrigin(&pointP, &pointQ); 
  
  std:: cout << "ans = " << ans << "\n" << std:: endl; //P is farther
  std:: cout << "----------------------------------------------" << std:: endl;

  //task C
  std:: cout << "(C)" << std:: endl;
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};

  move(&pos, &vel, 2.0); // object pos gets changed
  
  std:: cout << pos.x << " " << pos.y << " " << pos.z << "\n" << std:: endl; // prints: 2 -10 100.4
  std:: cout << "----------------------------------------------" << std:: endl;

  //task E
  std:: cout << "(E)" << std:: endl;
  double x,y,z;
  Coord3D *ppos = createCoord3D(10.0, 20.0, 30.0);
  Coord3D *pvel = createCoord3D(5.5, -1.4, 7.77);

  move(ppos, pvel, 10.0);
  
  std:: cout  << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std:: endl;
  
  deleteCoord3D(ppos); // release memory
  deleteCoord3D(pvel);

}

//ex.
/*
double x,y,z;
  Coord3D *ppos = createCoord3D(35.0, 42.0, 49.0);
  Coord3D *pvel = createCoord3D(12.0, 19.0, 98.0);

  move(ppos, pvel, 10.0);
  
  std:: cout  << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std:: endl;
  
  deleteCoord3D(ppos); // release memory
  deleteCoord3D(pvel);
*/
