#include<iostream>
using namespace std;

class DistM;
class DistF;

void add(DistM* m, DistF* f);


// Distance in meters and centimeters
class DistM{
    private:
        int meter;
        int centimeter;
    
    public:
        DistM(int meter, int centimeter){
            this->meter = meter;
            this->centimeter = centimeter;
        }

        friend void add(DistM* m, DistF* f);

        void display(){
            cout << "Distance: " << meter << "m " << centimeter << "cm" << endl;
        }
};

// Distance in feet and inches
class DistF{
    private:
        int feet;
        int inch;
    
    public:
        DistF(int feet, int inch){
            this->feet = feet;
            this->inch = inch;
        }

        friend void add(DistM* m, DistF* f);

        void display(){
            cout << "Distance: " << feet << "ft " << inch << "in" << endl;
        }
};


// add two distances and display in meters and centimeters
void add(DistM* m, DistF* f){
    int totalCentimeters = (m->meter * 100 + m->centimeter) + (f->feet * 30.48 + f->inch * 2.54);
    int totalMeters = totalCentimeters / 100;
    totalCentimeters = totalCentimeters % 100;

    cout << "Total distance: " << totalMeters << "m " << totalCentimeters << "cm" << endl;
}


// driver code
int main(){
    DistM m(1, 50);
    DistF f(5, 6);

    cout << "Distance 1: " << endl;
    m.display();
    cout << "Distance 2: " << endl;
    f.display();

    cout << endl;
    add(&m, &f);

    return 0;
}
