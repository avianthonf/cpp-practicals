// 2. Passing object argument to a function (e.g., passing Employee object)
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

// Function that takes an Employee object as an argument and returns it
Employee modifyEmployee(Employee emp) {
    emp.name += " (Modified)";
    return emp;
}

int main() {
    Employee emp;
    emp.input();
    
    emp = modifyEmployee(emp); // Passing object to function
    emp.display(); // Display modified employee

    return 0;
}

/* 
This program demonstrates passing an object as an argument to a function in C++. 
The Employee class has methods for input and display. The modifyEmployee function takes an Employee object, modifies its name, 
and returns it. The main function creates an Employee object, modifies it using the function, and displays the result.
*/

