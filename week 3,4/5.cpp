#include <iostream>
using namespace std;


// Triangle, bool
float area(float base, float height, bool triangle)
{
    return (0.5 * base * height);
}

// Rectangle, int
float area(float length, float breadth, int rectangle)
{
    return (length * breadth);
}


// Square, bool
float area(float side, bool square)
{
    return (side * side);
}

// Circle, int
float area(float radius, int circle)
{
    return (3.14 * radius * radius);

}

int main()
{
    // Triangle
    float base=3.5, height=9.2;
    cout << "Area of Triangle is = " << area(base, height, true) << endl;

    // Rectangle
    float length=5.5, breadth=33.6;
    cout << "Area of rectangle is = " << area(length, breadth, 1) << endl;

    // Square
    float side=7.45;
    cout << "Area of square is = " << area(side, true) << endl;

    // Circle
    float radius=8.346;
    cout << "Area of Circle is = " << area(radius, 1) << endl;


    return 0;
}