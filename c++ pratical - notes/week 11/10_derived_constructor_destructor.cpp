// 10. Single inheritance program with base and derived class constructors and destructors.
#include <iostream>

using namespace std;

class Base {  // Base Class with constructor/destructor.
public:
     Base() {
         cout << "Base Constructor Called" << endl;   
     }

     ~Base() {
         cout << "Base Destructor Called" << endl;   
     }
};

class Derived : public Base {  // Derived Class inheriting Base's constructor/destructor.
public:
     Derived() {
         cout<< "Derived Constructor Called" << endl;   
     }

     ~Derived(){
         cout<< "Derived Destructor Called" << endl;   
     }
};

int main(){
     Derived obj;  // Creating an instance of Derived triggers constructors/destructors.

     return 0;   
}

/* 
This program showcases how constructors and destructors work in a single inheritance scenario in C++. The base class (`Base`) has a constructor that outputs a message when called and a destructor that does likewise upon destruction. The derived (`Derived`) inherits these behaviors while also having its own constructor/destructor that outputs messages specific to itself.
When an object of the derived type is created in main(), both constructors are invoked in order (base followed by derived). Upon exiting scope or when deleting objects dynamically (if applicable), destructors are called in reverse order (derived followed by base), ensuring proper cleanup occurs as expected without memory leaks or dangling references.
*/
