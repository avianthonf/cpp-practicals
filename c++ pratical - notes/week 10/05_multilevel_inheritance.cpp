// 5. Program with multilevel inheritance 
#include <iostream>

using namespace std;

class Grandparent { // Grandparent base class
public:
    void displayGrandparent() {
        cout << "Grandparent Class" << endl;
    }
};

class Parent : public Grandparent { // Parent inherits from Grandparent
public:
    void displayParent() {
        cout << "Parent Class" << endl;
    }
};

class Child : public Parent { // Child inherits from Parent
public:
    void displayChild() {
        cout << "Child Class" << endl;
    }
};

int main() {
    Child c; // Create an object of Child class
    c.displayGrandparent(); // Call method from Grandparent
    c.displayParent();      // Call method from Parent
    c.displayChild();       // Call method from Child
    return 0;
}

/* 
This program demonstrates multilevel inheritance in C++. The hierarchy consists of three classes: `Grandparent`, `Parent`, and `Child`. 
The `Parent` inherits publicly from `Grandparent`, and the `Child` inherits publicly from `Parent`. Each class has its own display method that outputs its identity. 
In the main function, an object of the `Child` class is created, which can access methods from both its direct parent (`Parent`) and grandparent (`Grandparent`) classes due to multilevel inheritance.
*/

