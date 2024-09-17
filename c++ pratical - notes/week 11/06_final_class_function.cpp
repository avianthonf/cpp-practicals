#include <iostream>

using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show function." << endl;
    }
};

// Final class - cannot be inherited
class FinalClass final : public Base {
public:
    void show() final { // Final function - cannot be overridden
        cout << "FinalClass show function." << endl;
    }
};

// Attempting to derive from FinalClass will cause a compilation error
// class Derived : public FinalClass { // Uncommenting this line will result in an error
// };

int main() {
    FinalClass obj; // Create an object of FinalClass
    obj.show();     // Call the show method

    return 0;
}

/*
This program demonstrates the use of the `final` specifier in C++. The `Base` class contains a virtual function named `show()`, which can be overridden by derived classes. 

1. Base Class: The `Base` class defines a virtual function `show()`, which outputs a message indicating that it is the base class's show function. This function can be overridden by any derived classes.

2. Final Class: The `FinalClass` is declared as `final`, meaning that it cannot be inherited from. This prevents any further subclassing of `FinalClass`. If you attempt to create another class that derives from `FinalClass`, it will result in a compilation error.

3. Final Function: Inside the `FinalClass`, the `show()` function is also marked as `final`. This means that even if there were derived classes from `FinalClass` (which there cannot be, due to its final status), they would not be able to override the `show()` method. 

4. Main Function: In the `main` function, we create an object of the `FinalClass` and call its `show()` method. The output will indicate that it is calling the `show()` method from the `FinalClass`.

The use of the `final` specifier helps enforce design decisions and maintain intended behaviors in object-oriented programming. By preventing further inheritance or overriding, you can ensure that certain classes and functions retain their functionality and do not inadvertently change in subclasses. This can be particularly useful in large codebases where maintaining control over behavior is essential for stability and predictability.
*/

