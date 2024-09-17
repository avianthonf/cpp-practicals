// 1. Demonstrate I/O for an array of class objects (e.g., Employees)
#include <iostream>

using namespace std;

class Employee {
public:
    int id;
    string name;

    void input() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin.ignore(); // to ignore newline character
        getline(cin, name);
    }

    void display() const {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    const int size = 3; // Number of employees
    Employee employees[size];

    for (int i = 0; i < size; ++i) {
        cout << "Employee " << (i + 1) << ":\n";
        employees[i].input();
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < size; ++i) {
        employees[i].display();
    }

    return 0;
}

/* 
This program demonstrates input/output operations for an array of class objects representing employees. 
The Employee class contains attributes for employee ID and name, with methods to input and display these attributes. 
In the main function, an array of Employee objects is created, and user input is taken to populate the array. 
Finally, the details of each employee are displayed.
*/

