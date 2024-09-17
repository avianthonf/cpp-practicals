// 15. Overload the + operator to concatenate two string class objects.
#include <iostream>
#include <string>

using namespace std;

class String {
private:
     string str;

public:
     String(const char *s){
         str = s;
     }

     String operator+(const String& s){ // Overloading binary + operator for string concatenation  
         return String((str + s.str).c_str());  
     }  

     void display(){
         cout<<str<<endl;  
     }  
};  

int main(){  
     String str1("Hello ");  
     String str2("World!");  

     String str3 = str1 + str2; // Using overloaded + operator to concatenate strings  

     str3.display();  

     return 0;  
}  

/*  
This program demonstrates overloading the binary plus operator for string concatenation in C++. The String class has an overloaded operator+ method that concatenates two string objects together.
In the main function, two String objects are created and concatenated using this overloaded operator before displaying the result.
*/  

