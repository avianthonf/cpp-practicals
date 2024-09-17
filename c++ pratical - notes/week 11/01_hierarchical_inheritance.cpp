// 6. Program with hierarchical inheritance 
#include <iostream>

using namespace std;

class Base { // Base class for both derived classes
public:
   void displayBase() {
       cout << "Base Class" << endl;
   }
};

class Derived1 : public Base { // First derived class inheriting from Base
public:
   void displayDerived1() {
       cout << "Derived Class 1" << endl;
   }
};

class Derived2 : public Base { // Second derived class inheriting from Base
public:
   void displayDerived2() {
       cout << "Derived Class 2" << endl;
   }
};

int main() {
   Derived1 d1; // Object of first derived class
   Derived2 d2; // Object of second derived class

   d1.displayBase();      // Call base method using first derived object
   d1.displayDerived1();  // Call first derived specific method

   d2.displayBase();      // Call base method using second derived object
   d2.displayDerived2();  // Call second derived specific method

   return 0;
}

/* 
This program illustrates hierarchical inheritance in C++. The base class `Base` has a common function that can be accessed by multiple derived classes (`Derived1` and `Derived2`). 
Each derived class has its own specific function that displays its identity. In the main function, objects for both derived classes are created. Each object can call methods defined in both their own classes and inherited ones.
*/

