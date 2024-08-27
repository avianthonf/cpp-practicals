#include <iostream>
using namespace std;

class Avi
{
    private:
        static int count;

    public:
        static int getCount();

        Avi()
        {
            count++;
        }

};

int Avi::count = 0;

int Avi::getCount()
{
    return count;
}


int main()
{
    Avi a,b,c,d,e;

    cout << Avi::getCount();

    return 0;
}