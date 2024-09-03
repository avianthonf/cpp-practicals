#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    public:
        double x, y;

        Point(double x=0, double y=0)
        {
            Point::x = x;
            Point::y = y;
        }

        string display() const
        {
            return ("(" + to_string(x) + "," + to_string(y) + ")" );
        }

        friend double operator-(Point &p1, Point &p2);

};


double operator-(Point &p1, Point &p2)
{
    double distance = 0;

    distance = (p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y);

    distance = sqrt(distance);

    return distance;

}


int main()
{
    Point p1(3,4), p2(7,9);

    cout << "Distance b/w " << p1.display() << " and " << p2.display() << " is: " << p2 - p1 << endl;
}