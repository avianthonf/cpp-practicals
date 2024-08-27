#include <iostream>
using namespace std;

float circleArea(float r, const float PI=3.14)
{
    return (PI * r *r);
}

int main()
{
    int r;
    cout << "Enter value of radius: ";
    cin >> r;

    cout << "Area of circle with radius=" << r << " units is " << circleArea(r) << " Sq units." << endl;

    return 0;
}