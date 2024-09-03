#include <iostream>
using namespace std;

class Employee
{
    private:
        double salary;
        string name;

    public:
        Employee(double sal, string n) : salary(sal), name(n) {}

        friend void twiceSalary(Employee &obj);
};

void twiceSalary(Employee &obj)
{
    cout << "Old Salary: " << obj.salary << endl;
    obj.salary *= 2;
    cout << "New Salary: " << obj.salary << endl;

}

int main()
{
    Employee *a = new Employee(100.99001, "John");

    twiceSalary(*a);

    return 0;
} 