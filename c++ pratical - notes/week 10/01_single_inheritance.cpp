// 1. Program with single inheritance (Class Parent, Child)
#include <iostream>

using namespace std;

class Parent { // Base class
public:
    void display() {
        cout << "This is the parent class." << endl;
    }
};

class Child : public Parent { // Derived class
public:
    void show() {
        cout << "This is the child class." << endl;
    }
};

int main() {
    Child c; // Create an object of the derived class
    c.display(); // Call method from parent class
    c.show(); // Call method from child class
    return 0;
}

/* 
In this program, we demonstrate single inheritance in C++. The `Parent` class serves as the base class, containing a method `display()` that outputs a message. 
The `Child` class inherits from `Parent` using public inheritance, allowing it to access public members of `Parent`. The `Child` class has its own method `show()`. 
In the `main` function, an object of the `Child` class is created, and both methods from the base and derived classes are called, showcasing how inheritance allows the child class to utilize functionality from the parent class.
*/

