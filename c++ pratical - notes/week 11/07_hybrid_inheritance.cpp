// 7. Program with hybrid inheritance 
#include <iostream>

using namespace std;

class A { // Base Class A for hybrid inheritance example.
public:
   void showA() {
       cout << "Class A" << endl;
   }
};

class B : public A { // Derived Class B inheriting A.
public:
   void showB() {
       cout << "Class B" << endl;
   }
};

class C : public A { // Derived Class C inheriting A.
public:
   void showC() {
       cout << "Class C" << endl;
   }
};

class D : public B, public C { // Class D inherits B and C (Hybrid)
public:
   void showD() {
       showB();
       showC();
       cout << "Class D" << endl;
   }
};

int main() {
   D obj;      // Object of D which combines features.
   obj.showD();  // Displaying all inherited features.
   return 0;
}

/* 
This program demonstrates hybrid inheritance in C++. Here, we have a combination of multiple inheritance (Classes B and C inherit A) along with single inheritance (Class D inherits both B and C). 
Class D can access methods defined in Classes A, B, and C due to this structure. In the main function, an object of Class D is created which calls a single function that displays messages from all inherited classes.
*/

