#include <iostream>
using namespace std;

class MyClass
{
    private:
        string name;

    public:
        inline void fun()
        {
            cout << name;

        }

        MyClass(string n)
        {
            name = n;
        }

};

int main()
{
    MyClass a("Avi");
    a.fun();

    return 0;
}