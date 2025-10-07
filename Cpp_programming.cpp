
//Program using Constructor overloading

#include <iostream>
#include <cmath>    
using namespace std;

class Shape {
    double area;
public:
    // Default Constructor
    Shape() {
        area = 0;
    }

    // Constructor for Circle
    Shape(double radius) {
        area = M_PI * radius * radius;
    }

    // Constructor for Rectangle
    Shape(double length, double breadth) {
        area = length * breadth;
    }

    // Constructor for Triangle (using 3 sides)
    Shape(double a, double b, double c, bool isTriangle) {
        double s = (a + b + c) / 2;  // semi-perimeter
        area = sqrt(s * (s - a) * (s - b) * (s - c));  // Heron’s formula
    }

    void displayArea() {
        cout << "Area = " << area << endl;
    }
};

int main() {
    // Circle with radius 5
    Shape circle(5);
    cout << "Circle: ";
    circle.displayArea();

    // Rectangle with length = 4, breadth = 6
    Shape rectangle(4, 6);
    cout << "Rectangle: ";
    rectangle.displayArea();

    //  Triangle with sides 3, 4, 5
    Shape triangle(3, 4, 5, true);
    cout << "Triangle: ";
    triangle.displayArea();

    return 0;
}
