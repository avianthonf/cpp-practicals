// 2. Program with private, public visibility modifiers in single inheritance
#include <iostream>

using namespace std;

class Base { // Base class
private:
    int privateValue; // Private member

public:
    void setValue(int v) { // Public method to set private member
        privateValue = v;
    }

    void displayValue() { // Public method to display private member
        cout << "Private Value: " << privateValue << endl;
    }
};

class Derived : public Base { // Derived class
public:
    void show() {
        cout << "Accessing base class methods." << endl;
        displayValue(); // Accessing public method of base class
    }
};

int main() {
    Derived d; // Create an object of derived class
    d.setValue(10); // Set value using base class method
    d.show(); // Show value using derived class method
    return 0;
}

/* 
This program illustrates the use of visibility modifiers in single inheritance. The `Base` class contains a private member variable `privateValue`, which cannot be accessed directly outside the class. 
It provides public methods `setValue()` to modify this private variable and `displayValue()` to display its value. The `Derived` class inherits publicly from `Base`, allowing it to access public methods but not private members directly. 
In the `main` function, an object of the `Derived` class is created, and it uses the base class's public methods to set and display the private value.
*/

