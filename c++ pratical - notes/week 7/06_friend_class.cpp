#include <iostream>

using namespace std;

class Rectangle; // Forward declaration of the Rectangle class

class RectangleArea {
public:
    void calculateArea(Rectangle& rect) {
        area = rect.width * rect.length;
    }

    void displayArea() {
        cout << "Area: " << area << endl;
    }

private:
    int area;
};

class Rectangle {
private:
    int width, length;

public:
    void setDimensions(int w, int l) {
        width = w;
        length = l;
    }

    friend class RectangleArea; // Declaring RectangleArea as a friend class
};

int main() {
    Rectangle rect;
    rect.setDimensions(5, 10);

    RectangleArea rectArea;
    rectArea.calculateArea(rect);
    rectArea.displayArea();

    return 0;
}

/*
This program demonstrates the concept of friend classes in C++. The program calculates the area of a rectangle and displays the result.

The `Rectangle` class represents the rectangle object, storing its width and length as private member variables. The `setDimensions` method is used to set the dimensions of the rectangle.

The `RectangleArea` class is responsible for calculating and displaying the area of the rectangle. It has a `calculateArea` method that takes a reference to a `Rectangle` object as a parameter. Inside this method, the area is calculated by accessing the `width` and `length` member variables of the `Rectangle` object, even though they are private.

To allow the `RectangleArea` class to access the private members of the `Rectangle` class, we declare `RectangleArea` as a friend class using the `friend` keyword. This friendship relationship grants the `RectangleArea` class and its member functions direct access to the private members of the `Rectangle` class.

The `displayArea` method of the `RectangleArea` class is used to display the calculated area.

In the `main` function, we create an object of the `Rectangle` class and set its dimensions using the `setDimensions` method. Then, we create an object of the `RectangleArea` class and call its `calculateArea` method, passing the `Rectangle` object as an argument. Finally, we call the `displayArea` method to display the calculated area.

The output of the program will show the area of the rectangle, which is calculated by the `RectangleArea` class using the private member variables of the `Rectangle` class.

Friend classes provide a way to grant access to private and protected members of a class to another class, allowing for more flexibility in code organization and data sharing between related classes.
*/
