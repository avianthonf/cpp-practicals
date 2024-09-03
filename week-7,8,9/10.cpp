#include <iostream>
using namespace std;

class MyClass
{
    public:
        int value;

        MyClass(int x)
        {
            value = x;
        }

        friend MyClass operator-(MyClass &obj);

};

MyClass operator-(MyClass &obj)
{
    return MyClass(-(obj.value));
}

int main()
{
    MyClass x(10);

    MyClass y = -x;

    cout << x.value << "\t" << y.value ;
}