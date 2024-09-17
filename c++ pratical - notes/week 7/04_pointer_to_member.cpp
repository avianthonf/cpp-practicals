// 4. Demonstrate pointers to members (e.g., update() marks of student)
#include <iostream>

using namespace std;

class Student {
public:
    int marks;

    Student(int m) : marks(m) {}

    void update(int newMarks) {
        marks = newMarks; // Update marks
    }
};

int main() {
    Student student(75);
    
    // Pointer to member variable
    int Student::*pMarks = &Student::marks; 

    // Update using pointer to member
    student.*pMarks = 85;

    cout << "Updated Marks: " << student.marks << endl;

    return 0;
}

/* 
This program demonstrates the use of pointers to members in C++. The Student class has a member variable marks and a method 
to update it. A pointer to the member variable is created and used to update the student's marks directly.
*/

