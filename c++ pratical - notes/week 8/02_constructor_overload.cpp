// 6. Program to overload class constructors
#include <iostream>

using namespace std;

class Box {
public:
   double length;

   // Default constructor
   Box() : length(1.0) {}

   // Parameterized constructor for length only
   Box(double len) : length(len) {}

   // Copy constructor
   Box(const Box &b) : length(b.length) {}
};

int main() {
   Box box1;          // Calls default constructor
   Box box2(5.0);     // Calls parameterized constructor

   cout << "Box1 Length: " << box1.length << "\n"; // Outputs default length
   cout << "Box2 Length: " << box2.length << "\n"; // Outputs parameterized length

   return 0;
}

/* 
This program demonstrates overloading constructors in C++. The Box class has three constructors: a default constructor that sets a default length,
a parameterized constructor that allows setting a custom length, and a copy constructor that initializes from another Box instance.
The main function shows how each constructor can be used.
*/

