// 7. Demonstrate constructors with default arguments
#include <iostream>
#include <string>

using namespace std;

class Book {
public:
   string title;
   double price;

   Book(string t = "Untitled", double p = 9.99) : title(t), price(p) {} // Default arguments

   void display() const {
       cout << "Title: " << title << ", Price: $" << price << "\n";
   }
};

int main() {
   Book book1;              // Uses default arguments
   Book book2("C++ Primer", 39.99); // Uses provided arguments

   book1.display();
   book2.display();

   return 0;
}

/* 
This program demonstrates constructors with default arguments in C++. The Book class has a constructor with parameters for title and price,
both having default values. This allows creating Book objects with or without providing specific values.
*/

