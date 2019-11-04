  //
  //  mammal.h
  //  week10
  //
  //  Created by Eira Isabel Cuartero on 11/4/19.
  //  Copyright © 2019 Isabelle. All rights reserved.
  //  Laboratory Exercise 009 Week 010


#include <string>
#include <sstream>

using namespace std;

class LeggedMammal {
  
  short nLegs;
  string sFur;
  bool bTail;

public:
 LeggedMammal(short legs, string fur, bool hasTail) {
     nLegs = legs;
     sFur = fur;
     bTail = hasTail;
 }

 string getMammal() {
     ostringstream s;
     s << "No. of Legs: " << nLegs << endl;
     s << "Kind of Fur: " << sFur << endl;
     s << "Presence of Tail: " << bTail << endl;
     return s.str();
 }
};
