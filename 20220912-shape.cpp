#include<iostream>
using namespace std;

class Shape{
    private:
        float radius;
        float length;
        float breadth;
    
    public:
        // constructor for rectangle 
        Shape(float length, float breadth){
            this->length = length;
            this->breadth = breadth;
        }

        // constructor for circle
        Shape(float radius){
            this->radius = radius;
        }

        // constructor for circle and rectangle
        Shape(float radius, float length, float breadth){
            this->radius = radius;
            this->length = length;
            this->breadth = breadth;
        }

        float rectPerimeter(){
            return 2*(length + breadth);
        }

        float circlePerimeter(){
            return 2*3.14*radius;
        }

        ~Shape(){
            cout << "Shape destroyed" << endl;
        }
};


// driver 
int main()
{
    Shape s(50, 15, 20);

    cout << "Perimeter of Rectangle: " << s.rectPerimeter() << endl;
    cout << "Perimeter of Circle: " << s.circlePerimeter() << endl;

    return 0;
}

