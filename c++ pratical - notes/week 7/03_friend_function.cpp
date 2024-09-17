// 3. Demonstrate friend function (e.g., average() to calculate average of students' marks)
#include <iostream>

using namespace std;

class Student {
private:
    int marks[6];

public:
    void inputMarks() {
        cout << "Enter marks for 6 subjects: ";
        for (int &mark : marks) {
            cin >> mark;
        }
    }

    friend float calculateAverage(Student &s);
};

float calculateAverage(Student &s) {
    int total = 0;
    for (int mark : s.marks) {
        total += mark;
    }
    return static_cast<float>(total) / 6; // Calculate average
}

int main() {
    Student student;
    student.inputMarks();
    
    float avg = calculateAverage(student); // Friend function called
    cout << "Average Marks: " << avg << endl;

    return 0;
}

/* 
This program demonstrates the use of a friend function in C++. The Student class contains private member marks, 
and the calculateAverage function is declared as a friend, allowing it to access private data. The function calculates 
the average of the student's marks after they are inputted.
*/

