#include <iostream>
using namespace std;

class Student {

    private:
        string password;

    public:
        Student(string pass, string n) {
            password = pass;
            name = n;
        }

        string name;

        bool checkPass(string pass) {
            if (password == pass) {
                return true;
            }

            else {
                return false;
            }
        }

};

void check(string pass, Student x)
{
    if (x.checkPass(pass))
        cout << pass << " is the correct password for " << x.name << "." << endl;
    else
        cout << pass << " is NOT the correct password for " << x.name << "." << endl;

}

int main()
{
    Student avi("asdf","avi"), a("1234", "a"), b("zxcv", "b");

    check("axcr", avi);
    check("asdf", avi);
    check("1234", a);

    // The next line gives an error if uncommented
    // cout << avi.password;


    return 0;
}