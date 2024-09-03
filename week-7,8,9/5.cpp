#include <iostream>
using namespace std;

class Student
{
    private:
        double m1,m2,m3;

    public:
        string name;

        Student()
        {
            cout << "Default Constructor called" << endl;
        }

        Student(string name, double m1, double m2, double m3)
        {
            Student::name = name;
            Student::m1 = m1;
            Student::m2 = m2;
            Student::m3 = m3;

            cout << "Parameterized constructor called" << endl;
        }


        Student(Student &obj)
        {
            name = obj.name;
            m1 = obj.m1;
            m2 = obj.m2;
            m3 = obj.m3;

            cout << "Copy Constructor Called" << endl;
        }

        void display()
        {
            cout << name << endl << m1 << endl << m2 << endl << m3 << endl;
        }
};

int main()
{
    Student a("Avinash", 10, 20 , 30);

    Student b = a;

    b.display();

    return 0;
}