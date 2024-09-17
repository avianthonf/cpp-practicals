// 9. Demonstrate destructor
#include <iostream>

using namespace std;

class Sample {
public:
   Sample() { 
       cout << "Constructor called\n"; 
   }

   ~Sample() { 
       cout << "Destructor called\n"; 
   }
};

int main() {
   Sample obj; // Constructor is called

   return 0; // Destructor is called automatically when obj goes out of scope
}

/* 
This program demonstrates the use of destructors in C++. The Sample class has a constructor and destructor that print messages when called.
When the object goes out of scope at the end of the main function, the destructor is invoked automatically.
*/

