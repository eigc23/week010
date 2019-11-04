  //
  //  main.cpp
  //  week10
  //
  //  Created by Eira Isabel Cuartero on 11/4/19.
  //  Copyright © 2019 Isabelle. All rights reserved.
  //  Laboratory Exercise 009 Week 010

//****************person****************

#include <iostream>
#include <stdlib.h>
#include "person.h"

using namespace std;

int main () {

  Person pers("Eira Cuartero", "Manila, Philippines", "Female", 23, "Student");

  cout << "Personal Details \n" << endl << pers.getPerson() << endl;

  cout << endl;

//system("pause");
return EXIT_SUCCESS;

}

//***************end******************
