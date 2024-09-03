#include <iostream>
using namespace std;

class MyClass
{
    public:
        int *x;

        MyClass(int *a)
        {
            x=a;
        }
        MyClass(int a[], int n)
        {
            x = new int[n];
            
            for (int i=0; i<n; i++)
            {
                x[i] = a[i];
            }
        }

        //Destructor
        ~MyClass()
        {
            delete x;
        }


};

int main()
{
    int *x = new int[100];

    MyClass a = x;

    a.~MyClass();


    return 0;
}