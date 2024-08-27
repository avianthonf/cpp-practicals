#include <iostream>
using namespace std;

int main()
{
    int *num1=new int, *num2=new int, *temp= new int;

    cout << "Enter two numbers: ";
    cin >> *num1 >> *num2;

    cout << *num1 << " " << *num2 << endl;

    // Swap
    *temp = *num1;
    *num1 = *num2;
    *num2 = *temp;

    cout << *num1 << " " << *num2;

    return 0;

}