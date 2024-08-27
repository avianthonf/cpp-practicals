#include <iostream>
using namespace std;

int main()
{
    // Declare all variables
    string *name = new string, *address = new string;
    int *age = new int, *roll = new int;


    // Input all the data
    cout << "Enter your name: ";
    cin >> *name;

    cout << "Enter your age: ";
    cin >> *age;

    cout << "Enter your roll: ";
    cin >> *roll;

    cout << "Enter your address: ";
    cin >> *address;


    // Output
    cout << "\n\n\nSTUDENT DETAILS\n";
    cout << "Name: " << *name << "\tAge: " << *age << endl;
    cout << "Roll: " << *roll << "\tAddress: " << *address << endl;

    
    return 0;
}