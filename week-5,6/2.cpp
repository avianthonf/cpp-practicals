#include <iostream>
using namespace std;

class Avi
{
    public:
        int age;
        string name;

        Avi()
        {

        }

};

int main()
{
    Avi x;

    x.age =18;
    x.name = "Avinash";

    cout << x.age << endl << x.name ;

    return 0;
}