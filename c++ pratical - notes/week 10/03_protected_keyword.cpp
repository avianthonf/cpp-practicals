// 3. Program with protected visibility modifier in single inheritance
#include <iostream>

using namespace std;

class Base { // Base class
protected: // Protected member
    int protectedValue;

public:
    void setValue(int v) {
        protectedValue = v; // Method to set protected member
    }
};

class Derived : public Base { // Derived class
public:
    void show() {
        cout << "Protected Value: " << protectedValue << endl; // Accessing protected member
    }
};

int main() {
    Derived d; // Create an object of derived class
    d.setValue(20); // Set value using base class method
    d.show(); // Display protected value using derived class method
    return 0;
}

/* 
This program demonstrates the use of a protected visibility modifier in single inheritance. The `Base` class has a protected member variable `protectedValue`, which can be accessed by derived classes but not outside of them. 
The derived `Derived` class has access to this protected member and can display its value through its own method `show()`. 
In the `main` function, an object of the `Derived` class is created. The base class's method is used to set the protected value, and then it is displayed using a method from the derived class.
*/

