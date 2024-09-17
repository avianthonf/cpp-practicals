// 13. Overload binary operator - to find distance between two points p1 (x1, y1) and p2 (x2, y2)
#include <iostream>
#include <cmath>

using namespace std;

class Point {
public:
     double x,y;

     Point(double xCoord,double yCoord): x(xCoord), y(yCoord){}

     double operator-(const Point& p){ // Overloading binary - operator to calculate distance between points  
         return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));  
     }  
};  

int main(){  
     Point p1(3.0,4.0);  
     Point p2(7.0,1.0);  

     double distance = p1 - p2;  
     cout<<"Distance between points: "<<distance<<endl;  

     return 0;  
}  

/*  
This program demonstrates overloading the binary minus operator in C++. The Point class has an overloaded operator- method that calculates distance between two points using Euclidean distance formula.
In the main function, two Point objects are created and their distance calculated using this overloaded operator.
*/  

