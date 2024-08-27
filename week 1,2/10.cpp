#include <iostream>
using namespace std;

int fWhile(int n)
{
    int fac=1;

    while (n>1)
    {
        fac *= n;
        n--;
    }

    return fac;
}

int fDoWhile(int n)
{
    int fac=1;

    if (n>1)
    {
        do
        {
            fac *=n;
            n--;
        } while (n>1);
    }

    return fac;
    
}

int fFor(int n)
{
    int fac = 1;

    for (;n > 1; n--)
    {
        fac *= n;
    }

    return fac;
}

int main()
{
    int num;
    cout << "Enter number to calculate factorial: ";
    cin >> num;

    cout << num << "! = ";

    //cout << fWhile(num);
    //cout << fDoWhile(num);
    cout << fFor(num);
    
    return 0;
}