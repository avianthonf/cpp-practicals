// 10. Overload unary operator – to negate the sign of the object number.
#include <iostream>

using namespace std;

class Number {
public:
   int value;

   Number(int v) : value(v) {}

   Number operator-() { // Overloading unary minus operator
       return Number(-value);
   }
};

int main() {
   Number num(10);
   
   Number negNum = -num; // Using overloaded operator
   
   cout << "Original Value: " << num.value <<
                ", Negated Value: " << negNum.value;

   return 0;
}

/* 
This program demonstrates overloading the unary minus operator in C++. The Number class has an overloaded operator- method that negates its value.
In the main function, this operator is used to create a new Number object with negated value from an existing one.
*/

