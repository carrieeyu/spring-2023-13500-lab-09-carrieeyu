/*
task D:
Should still keep creating poems, but all dynamically allocated memory should get deleted when it is not needed
*/

#include <iostream>

std:: string * createAPoemDynamically() {
    std:: string *p = new std:: string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
      std:: string *p;
      p = createAPoemDynamically();// assume that the poem p is not needed at this point
      std:: cout << (*p) << std:: endl; //prints the looped text
      delete p; //without this, the program is "killed" in replit; when delete is implemented, it no longer appears
    }
  
}

