#include <iostream>
using namespace std;

class Student
{
    public:
        double marks;

        Student(double marks)
        {
            Student::marks = marks;
        }

        void update(double mks)
        {
            marks = mks;
        }
};

int main()
{
    Student a = Student(99.3);

    void (Student::*up)(double) = &Student::update;

    (a.*up)(99.0);


}