// 8. Initialize objects dynamically with constructors
#include <iostream>

using namespace std;

class Person {
public:
   int age;

   Person(int a) : age(a) {} // Parameterized constructor

   void display() const {
       cout << "Age: " << age << "\n";
   }
};

int main() {
   Person *p = new Person(30); // Dynamically allocated object

   p->display();                // Accessing member function

   delete p;                   // Freeing allocated memory

   return 0;
}

/* 
This program demonstrates dynamic initialization of objects using constructors in C++. A Person object is created dynamically using 'new',
and its age is displayed using a member function. Finally, memory is released using 'delete'.
*/

