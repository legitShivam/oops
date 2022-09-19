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

            this->radius = 0;
        }

        // constructor for circle
        Shape(float radius){
            this->radius = radius;

            this->length = 0;
            this->breadth = 0;
        }

        // member function to calculate area of rectangle
        float perimeter(){
            if(radius == 0){
                return 2*(length + breadth);
            }

            return 2*3.14*radius;
        }

        ~Shape(){
            cout << "Shape destroyed" << endl;
        }
};


// driver 
int main()
{
    Shape circle(50), rectangle(10, 20);

    cout << "Perimeter of Rectangle: " << rectangle.perimeter() << endl;
    cout << "Perimeter of Circle: " << circle.perimeter() << endl << endl;

    return 0;
}

