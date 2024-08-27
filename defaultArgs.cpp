#include <iostream>
using namespace std;

float egRectArea(int length=1, int breadth=2)
{
    return length*breadth;
}

int main()
{
    int a;
    cout << "Enter length: ";
    cin >> a;

    cout << "Area is: " << egRectArea(a) << " Sq units" << endl;

    return 0;
}