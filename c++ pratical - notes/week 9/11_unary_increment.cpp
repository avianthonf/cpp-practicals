// 11. Overload unary operator ++ to increment an object's data.
#include <iostream>

using namespace std;

class Counter {
public:
   int count;

   Counter(int c) : count(c) {}

   Counter operator++() { // Overloading prefix increment operator
       ++count;           // Increment count before returning new object
       return *this;      // Return current object by reference
   }
};

int main() {
   Counter c(5);
   
   ++c;                  // Incrementing using overloaded operator
   
   cout << "Count after increment: " << c.count;

   return 0;
}

/* 
This program demonstrates overloading the prefix increment operator in C++. The Counter class has an overloaded operator++ method that increments its count value.
In the main function, this operator is used to increment the count directly on an existing Counter object.
*/

