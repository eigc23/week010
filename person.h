//
//  person.h
//  week10
//
//  Created by Eira Isabel Cuartero on 11/4/19.
//  Copyright © 2019 Isabelle. All rights reserved.
//  Laboratory Exercise 009 Week 010

  
#include <string>
#include <sstream>

using namespace std;

class Person {
  
  string Name, Address, Gender, Occupation;
  short Age;


public:
 Person(string name, string address, string gender, short age, string occupation) {
     Name = name;
     Address = address;
     Gender = gender;
     Age = age;
     Occupation = occupation;
 }

 string getPerson() {
     ostringstream s;
     s << "Name: " << Name << endl;
     s << "Address: " << Address << endl;
     s << "Gender: " << Gender << endl;
     s << "Age: " << Age << endl;
     s << "Occupation: " << Occupation << endl;
     return s.str();
 }
};


//***************end******************
