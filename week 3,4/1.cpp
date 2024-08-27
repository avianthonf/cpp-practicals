#include <iostream>
using namespace std;

inline void message() { cout << "Message from inline function!" << endl;}

int main()
{
    message();

    return 0;
}