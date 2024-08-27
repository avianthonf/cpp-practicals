/*Create a class called employee. The class employee has 3 variables: employee id, employee name, and employee 
address. And method : display employee info.
There is a child class called permanent employee which has 4 variables: basic pay, da, hra and ta. And a 
method to compute the salary. + also a method to display the salary. Permanent employee is the child class of
 employee.
 
 Consider the above class and addd a manager class to it. The manager class has variables: advance salary and
 vehicle. And methods: to print the advance pay and vehicle. Manager class is the child class and permanent 
 employee is it's parent class.*/

#include <iostream>
using namespace std;


 class Employee
 {
    private:
        string employeeID, employeeName, employeeAddress;

    public:
        void displayInfo();

        Employee(string a, string b, string c)
        {
            employeeID = a;
            employeeName = b;
            employeeAddress = c;
        }

 };

 void Employee::displayInfo()
 {
    cout << "ID: " << employeeID << endl << "Name: " << employeeName << endl
     << "Address: " << employeeAddress << endl;
 }

 class PermanentEmployee : public Employee
 {
    float basicPay, dA, hRA, tA, salary;

    public:
        void displaySalary();
        void computeSalary();

        PermanentEmployee(float a = 0, float b = 0, float c = 0, float d = 0, string e = "",
         string f = "", string g = "") : Employee(e , f, g)
        {
        

            basicPay = a;
            dA = b;
            hRA = c;
            tA = d;

            
        }

 };

void PermanentEmployee::computeSalary()
{
    salary = basicPay + dA + hRA + tA;
}

void PermanentEmployee::displaySalary()
{
    cout << "Salary: " << salary << endl;
}


class Manager : public PermanentEmployee
{
    float advanceSalary;
    string vehicle;

    public:
        void displayAdvance();
        void displayVehicle();

    Manager(float sal = 0, string veh = "", float a = 0, float b = 0, float c = 0, float d = 0, string e = "", 
        string f = "", string g = "") : PermanentEmployee(a, b , c, d, e, f, g)
        {
            

            advanceSalary = sal;
            vehicle = veh;

        }

};

void Manager::displayAdvance()
{
    cout << "Advance: " << advanceSalary;
}

void Manager::displayVehicle()
{
    cout << "Vehicle: " << vehicle;
}

int main()
{
    Manager avi(50000, "Vehicle");

    avi.computeSalary();
    avi.displaySalary();


    return 0;
}