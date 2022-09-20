#include<iostream>
using namespace std;

// defining overloaded functions to calculate area of circle, rectangle and triangle
int area(float radius);
int area(float length, float breadth);
int area(double base, double height);


// driver 
int main()
{
    int circleArea, rectangleArea, triangleArea;
    circleArea = area(56);
    rectangleArea = area(15.0f, 20.0f);
    triangleArea = area(15.0, 20.0);

    cout << "Area of circle: " << circleArea << endl; 
    cout << "Area of Rectangle: " << rectangleArea << endl;
    cout << "Area of Triangle: " << triangleArea << endl;

    return 0;
}

int area(float radius){
    // this calculates the area of a circle with given radius
    return 3.14 * radius*radius;
}

int area(float length, float breadth){
    // this calculates the area of a rectangle with given length and breadth
    return length * breadth;
}

int area(double base, double height){
    // this calculates area of the triangle with given base and height
    return 0.5 * base * height;
}
