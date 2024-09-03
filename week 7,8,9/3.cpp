#include <iostream>
#include <math.h>
using namespace std;

struct MarksStruct
{
    double cs, maths;

};

class Student
{
    private:
        MarksStruct marks;

    public:
        void init(double c, double m)
        {
            marks.cs = c;
            marks.maths = m;
        }

        friend double egAverage(Student *obj, int n);

};

double egAverage(Student *obj, int n)
{
    double avg = 0;

    for (int i=0; i<n; i++)
    {
        avg += obj[i].marks.cs;
        avg += obj[i].marks.maths;
    }

    avg /= (2*n);

    return avg;
}

int main()
{
    int n= 100;
    Student *data = new Student[n];

    for (int i = 0; i < n; i++)
    {
        data[i].init(100*abs(sin(i+1)), 100*abs(sin((i+10)*3))); // use Sin function to init data with high variance
        cout << "Student " << i+1 << " : " << "CS:" << 100*abs(sin(i+1)) << " Maths:" << 100*abs(sin((i+10)*3)) << endl;
    }

    double avg = egAverage(data, n);

    cout << "Average is: " << avg << endl;

    return 0;
}

