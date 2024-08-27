//new one 

#include <iostream>
using namespace std;

string breakdown(int num);
string h(int num);
string t(int num);
string u(int num);
string special(int num);

string u(int num) {
    switch (num) {
        case 0: return "";
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        default: return "";
    }
}

string t(int num) {
    switch (num) {
        case 2: return "twenty";
        case 3: return "thirty";
        case 4: return "forty";
        case 5: return "fifty";
        case 6: return "sixty";
        case 7: return "seventy";
        case 8: return "eighty";
        case 9: return "ninety"; // Fixed typo "ninty"
        default: return "";
    }
}

string h(int num) {
    return u(num) + " hundred";
}

string special(int num) {
    switch (num) {
        case 10: return "ten";
        case 11: return "eleven";
        case 12: return "twelve";
        case 13: return "thirteen";
        case 14: return "fourteen";
        case 15: return "fifteen";
        case 16: return "sixteen";
        case 17: return "seventeen";
        case 18: return "eighteen";
        case 19: return "nineteen";
        default: return "";
    }
}

string breakdown(int num) {
    int hun, ten, uni, sp;
    string word;

    if (num < 1000) {
        // Breakdown
        hun = num / 100;
        ten = (num % 100) / 10;
        uni = num % 10;
        sp = num % 100;

        // Hundreds place
        if (hun > 0) {
            word.append(h(hun));
            if (sp > 0) word.append(" and ");
        }

        // Special case for numbers between 10 and 19
        if (sp > 9 && sp < 20) {
            word.append(special(sp));
            return word;
        }

        // Tens place
        if (ten > 1) {
            word.append(t(ten));
            if (uni > 0) word.append(" ");
        }

        // Units place
        if (uni > 0) {
            word.append(u(uni));
        }
    }

    return word;
}

int main() {
    int num;
    string word;

    // Input
    cout << "Enter number to convert to words: ";
    cin >> num;

    // Conversion
    word = breakdown(num);

    // Output
    cout << num << " = " << word << endl;

    return 0;
}





//old one 

// #include <iostream>
// using namespace std;

string breakdown(int num), h(int num), t(int num), u(int num), special(int num);

string u(int num)
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
}

return "";
}

string t(int num)
{
    switch (num)
    {
        
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
    }
    return "";
}

string h(int num)
{
    string ans;
    ans = (u(num) + " hundred");

    return ans;
}

string special(int num)
{
    switch (num)
    {
        case 10:
            return "ten";
            break;
        
        case 11:
            return "eleven";
            break;

        case 12:
            return "twelve";
            break;
        case 13:
            return "thirteen";
            break;

        case 14:
            return "fourteen";
            break;

        case 15:
            return "fifteen";
            break;
        
        case 16:
            return "sixteen";
            break;

        case 17:
            return "seventeen";
            break;

        case 18:
            return "eighteen";
            break;

        case 19:
            return "nineteen";

    }

    return "";
}

string breakdown(int num)
{
    int hun,ten, uni, sp;
    string word;

    if (num < 1000)
    {
        // Breakdown
        if ((num>99))
        {
            hun = num %100;
            ten = (num % 10) - (hun*10);
            uni = (num - ((hun*100)+(ten*10)));
            sp = (num - (hun*100));
            /* code */
        }
        else if (num > 9)
        {
            hun = 0;
            ten = num%10;
            uni = (num- (ten*10));
            sp = num;
        
        }
        else if (num > 0)
        {
            hun =0;
            ten =0;
            uni =num;
            sp = num;
        }
        
        
        

        // Hundreths place
        
        if (num >99)
        {
            word.append(h(hun));
            if (sp>0)
                word.append(" and ");
        }

        if ((num>9) && (num < 100))
            sp = (num);

        // special case
        if ((sp>9) && (sp<20))
        {
            word.append(special(sp));
            return word;
        }

        // tens place
        
        if (ten >1)
        {
            word.append(t(ten));
                
        }

        // units place

        if (uni>0)
        {
            word.append(" ");
            word.append(u(uni));

        }

        
        
    }
    
    return word;

}

int main()
{
    int num;
    string word;

    //Input
    cout << "Enter number to convert to words: ";
    cin >> num;

    // Conversion
    word = breakdown(num);

    // Output
    cout << num << " = " << word << endl;

    return 0;
}
