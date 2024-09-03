#include <iostream>
using namespace std;

class MyClass
{
    int x;

    public:
        MyClass(int a=0)
        {
            x = a;
        }
};

int main()
{
    MyClass a, b = MyClass(3), c;

    return 0;

}

