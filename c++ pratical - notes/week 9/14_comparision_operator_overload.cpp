// 14. Overload binary operator < to compare two objects.
#include <iostream>

using namespace std;

class Box {
public:
     double volume;

     Box(double v): volume(v){}

     bool operator<(const Box& b){ // Overloading binary < operator for comparison based on volume  
         return volume < b.volume;  
     }  
};  

int main(){  
     Box box1(10);  
     Box box2(20);  

     if(box1 < box2){  
         cout<<"Box1 is smaller than Box2";  
     } else {  
         cout<<"Box1 is not smaller than Box2";  
     }  

     return 0;  
}  

/*  
This program demonstrates overloading the binary less-than operator in C++. The Box class has an overloaded operator< method that compares two boxes based on their volume attribute.
In the main function, two Box objects are compared using this overloaded operator.
*/  

