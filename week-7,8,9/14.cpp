#include <iostream>
#include <math.h>
using namespace std;

class Complex
{
    public:
        // Constructor
        Complex(int real, int imaginary)
        {
            Complex::real = real;
            Complex::imaginary = imaginary;
        }

        // Public data members
        int real,imaginary;

        // Overloaded binary minus operator
        friend Complex operator-(Complex &opr1, Complex &opr2);

        // Overloaded binary plus operator
        friend Complex operator+(Complex &opr1, Complex &opr2);

        // Overloaded unary pre increment
        friend Complex operator++(Complex &obj);

        // Overload < operator
        friend bool operator<(Complex &lo, Complex &ro);
        

};

Complex operator-(Complex &opr1, Complex &opr2)
{
    return Complex(opr1.real - opr2.real, opr1.imaginary - opr2.imaginary);

}

Complex operator+(Complex &opr1, Complex &opr2)
{
    return Complex(opr1.real + opr2.real, opr1.imaginary + opr2.imaginary);

}

Complex operator++(Complex &obj)
{
    ++obj.real;
    return obj;
}

Complex operator++(Complex &obj, int)
{
    int temp = obj.real++;
    return Complex(temp, obj.imaginary);
}

bool operator<(Complex &lo, Complex &ro)
{
    double d1 = 0;
    d1 = (lo.real)*(lo.real) + (lo.imaginary)*(lo.imaginary);
    d1 = sqrt(d1);

    double d2 = 0;
    d2 = (ro.real)*(ro.real) + (ro.imaginary)*(ro.imaginary);
    d2 = sqrt(d2);

    return (d1<d2);
}
        




int main()
{
    Complex *a, *b;

    b = new Complex(9,8);
    a = new Complex(3,6);

    if (*a < *b)
        cout << "a < b" << endl;

    return 0;
}