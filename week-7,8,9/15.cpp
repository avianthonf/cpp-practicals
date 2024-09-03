#include <iostream>
using namespace std;

string operator+(string &s1, string &s2)
{
    string s3;

    s3.append(s1);
    s3.append(s2);

    return s3;
    
}

int main()
{
    string s1 = "Hello ";
    string s2 = "World!";


    string s3 = s1 + s2;

    cout << s3;
}