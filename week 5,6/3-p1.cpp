#include <iostream>
using namespace std;

class Avi
{
    public:
        int age;
        string name;

        int birthYear(int currentyear)
        {
            return (currentyear-age);
        }

};

int main()
{
    Avi x;

    x.age =20;
    x.name = "Avinash";

    cout << x.age << endl << x.name  << endl << x.birthYear(2024);

    return 0;
}