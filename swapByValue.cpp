#include <iostream>
using namespace std;

void swapVal(int a, int b)
{
    int c=a;
    a=b;
    b=c;
}

void swapRef(int *a, int *b)
{
    int *c = new int;

    *c = *a;
    *a = *b;
    *b = *c;
}

int main()
{
    int a,b;
    cout << "Enter two numbers to swap: ";
    cin >> a >> b;

    cout << "Original: a=" << a << " b=" << b << endl ;
    swapVal(a,b);
    cout << "Swap by Value: a=" << a << " b=" << b << endl ;
    swapRef(&a, &b);
    cout << "Swap by reference: a=" << a << " b=" << b << endl ;

    return 0;

}