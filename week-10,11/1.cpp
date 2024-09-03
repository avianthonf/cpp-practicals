#include <iostream>
using namespace std;

class Parent
{
    protected:
        string name;

        Parent(string n) : name(n) {}

};

class Child : private Parent
{
    public:
        Child(string name) : Parent(name) { }

        string getName() const {return name;}

};

int main()
{
    Child x("Avinash");

    cout << x.getName();
}