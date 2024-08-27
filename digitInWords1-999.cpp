#include <iostream>
using namespace std;

class Number
{
    public:
        int u=0,t=0,h=0, flag = 1;
        string word;

        Number(int num)
        {
            h = num / 100;
            t = (num/10 - h*10);
            u = (num - (h*100 + t*10));

            convert();
        }

    private:
        string unit(int num);
        string ten(int num);
        string hund(int num);
        string special(int num);

        void convert();

};

int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;


    Number dnum(num);

    cout << dnum.word << endl;

    return 0;
}

string Number::unit(int num)
{
    switch (num)
    {
        case 0:
            return "";
            break;
        case 1:
            return "one";
            break;
        case 2:
            return "two";
            break;
        case 3:
            return "three";
            break;
        case 4:
            return "four";
            break;
        case 5:
            return "five";
            break;
        case 6:
            return "six";
            break;
        case 7:
            return "seven";
            break;
        case 8:
            return "eight";
            break;
        case 9:
            return "nine";
            break;
        default:
            return "";
    }
    return "";
}

string Number::ten(int num)
{
    switch (num)
    {
        case 1:
            flag = 0;
            special(10*t + u);
            break;
        case 2:
            return "twenty";
            break;

        case 3:
            return "thirty";
            break;

        case 4:
            return "forty";
            break;

        case 5:
            return "fifty";
            break;

        case 6:
            return "sixty";
            break;

        case 7:
            return "seventy";
            break;

        case 8:
            return "eighty";
            break;

        case 9:
            return "ninty";
            break;
        default:
            return "";
    }
    return "";
}

string Number::hund(int num)
{
    string ans;
    ans = (unit(num) + " hundred");

    return ans;
}

string Number::special(int num)
{   
    switch (num)
    {
        case 10:
            word.append("ten");
            break;
        
        case 11:
            word.append("eleven");
            break;

        case 12:
            word.append("twelve");
            break;
        case 13:
            word.append("thirteen");
            break;

        case 14:
            word.append("fourteen");
            break;

        case 15:
            word.append("fifteen");
            break;
        
        case 16:
            word.append("sixteen");
            break;

        case 17:
            word.append("seventeen");
            break;

        case 18:
            word.append("eighteen");
            break;

        case 19:
            word.append("nineteen");
            break;

        default:
            return "";

    }
    return "";

}

void Number::convert()
{
    if (h)
    {
        word.append(hund(h));
    }

    if (t)
    {
        if (h)
        {
            word.append(" and ");
        }

        word.append(ten(t));

    }

    if (u && flag)
    {
        word.append(" ");
        word.append(unit(u));
    }
}