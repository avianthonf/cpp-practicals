#include <iostream>
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




int main()
{
    Complex *a, *b;

    a = new Complex(9,8);
    b = new Complex(3,6);

    Complex *c = &(*a + *b);
    Complex *d = &(*a - *b);



    cout << "a = " << a->real << "+" << a->imaginary << "i" << endl;
    cout << "b = " << b->real << "+" << b->imaginary << "i" << endl;
    cout << "a+b = " << c->real << "+" << c->imaginary << "i" << endl;
    cout << "a-b = " << d->real << "+" << d->imaginary << "i" << endl;



    return 0;
}