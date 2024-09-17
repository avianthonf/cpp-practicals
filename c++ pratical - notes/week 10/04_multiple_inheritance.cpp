// 4. Program with multiple inheritance 
#include <iostream>

using namespace std;

class ClassA { // First base class
public:
    void displayA() {
        cout << "Class A" << endl;
    }
};

class ClassB { // Second base class
public:
    void displayB() {
        cout << "Class B" << endl;
    }
};

class Derived : public ClassA, public ClassB { // Derived from both ClassA and ClassB
public:
    void displayBoth() {
        displayA(); // Call method from ClassA
        displayB(); // Call method from ClassB
        cout << "Derived Class" << endl;
    }
};

int main() {
    Derived d; // Create an object of derived class
    d.displayBoth(); // Call method that displays messages from both base classes
    return 0;
}

/* 
This program illustrates multiple inheritance in C++. The classes `ClassA` and `ClassB` serve as two separate base classes, each having its own display method. 
The derived class `Derived` inherits publicly from both classes, allowing it to access their methods. In its own method, `displayBoth()`, it calls methods from both base classes and outputs a message indicating that it's part of the derived class. 
In the main function, an object of the derived class is created, and its combined functionality is demonstrated through a single call.
*/

