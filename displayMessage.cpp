#include <iostream>
using namespace std;

void nWhile(int n)
{
    while (n>0)
    {
        cout << "Well done" << endl;
        n--;
    }
}

void nDoWhile(int n)
{
    // Make sure n is > 0
    if (n>0)
    {
        do
        {
            cout << "Well done" << endl;
            n--;
        } while (n>0);
    }
    
}

void nFor(int n)
{
    for (;n > 0; n--)
    {
        cout << "Well done" << endl;
    }
}

int main()
{
    int num;
    cout << "Enter how many times to display the message: " ;
    cin >> num;

    //nDoWhile(num);
    //nWhile(num);
    nFor(num);

    return 0;
}