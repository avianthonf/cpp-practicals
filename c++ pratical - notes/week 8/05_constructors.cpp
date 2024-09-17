// 5. Demonstrate constructors: default, parameterized, copy
#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    int id;
    string name;

    // Default constructor
    Student() : id(0), name("Unknown") {}

    // Parameterized constructor
    Student(int i, const string &n) : id(i), name(n) {}

    // Copy constructor
    Student(const Student &s) : id(s.id), name(s.name) {}

    void display() const {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Student s1; // Default constructor
    s1.display();

    Student s2(1, "Alice"); // Parameterized constructor
    s2.display();

    Student s3(s2); // Copy constructor
    s3.display();

   return 0;
}
