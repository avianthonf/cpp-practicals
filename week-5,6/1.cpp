#include <iostream>
using namespace std;

int main()
{
    struct student
    {
        string name;
        int age, roll;
    };

    student avi;

    avi.age = 18;
    avi.name = "Avinash";
    avi.roll = 2305006;

    cout << avi.age << endl << avi.name << endl << avi.roll;
}