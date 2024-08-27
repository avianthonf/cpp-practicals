#include <iostream>
using namespace std;

class MyClass
{
    public:
        static int count;

        MyClass()
        {
            count ++;
        }

};

int MyClass::count = 0;


int main()
{
    MyClass a,b,c,d,e;

    cout << MyClass::count;

    return 0;
}