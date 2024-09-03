#include <iostream>
using namespace std;

int main()
{
    int *num1 = new int, *num2 = new int, *sum= new int;
    float *avg = new float;

    cout<< "Enter 2 numbers: ";
    cin >> *num1 >> *num2;
    
    *sum = *num1 + *num2;
    *avg = (float)*sum/2;

    cout<< "The sum is " << *sum << ".\n";
    cout<< "The average is " << *avg << ".\n";

    return 0;
}