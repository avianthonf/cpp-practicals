// 12. Overload binary operator + to add two complex numbers.
#include <iostream>

using namespace std;

class Complex {
public:
   float real, imag;

   Complex(float r, float i) : real(r), imag(i) {}

   Complex operator+(const Complex &c) { // Overloading binary + operator
       return Complex(real + c.real, imag + c.imag);
   }
};

int main() {
   Complex c1(2.5, 3.5);
   Complex c2(1.5, 2.5);

   Complex c3 = c1 + c2; // Using overloaded + operator
   
   cout << "Sum: (" <<
                c3.real <<
                ", " <<
                c3.imag <<
                ")" <<
                "\n";

return 0;
}

/* 
This program demonstrates overloading the binary plus operator in C++. The Complex class has an overloaded operator+ method that adds two complex numbers together.
In the main function, two Complex objects are created and added using this overloaded operator.
*/

