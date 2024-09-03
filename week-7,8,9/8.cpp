#include <iostream>
using namespace std;

class MyClass
{
    private:
        int *data;

    public:
        MyClass(int *x)
        {
            data = x;
        }

        MyClass(int x)
        {
            data = new int(x);
        }

        int getData() {return *data;}

};

int main()
{
    MyClass a = 4;

    int *y = new int(8);

    MyClass b = MyClass(y);

    return 0;
}