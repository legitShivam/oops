#include<iostream>
using namespace std;

class Length{
    private:
        int feet;
        int inches;

    public:
        // default constructor
        Length(){
            this->feet = 0;
            this->inches = 0;
        }
        // constructor for rectangle 
        Length(int feet, int inches){
            this->feet = feet;
            this->inches = inches;
        }

        Length operator + (const Length& other){
            Length sum;

            sum.inches = this->inches + other.inches;
            sum.feet = this->feet + other.feet + (sum.inches / 12);
            sum.inches = sum.inches % 12;

            return sum;
        }

        int operator < (const Length &other){
            if(this->feet < other.feet){
                return 1;
            }
            else if (this->inches < other.inches){ 
                return 1;  
            }

            return 0;
        }

        int operator == (const Length &other){
            if((this->feet == other.feet) and (this->inches == other.inches)){
                return 1;
            }

            return 0;
        }
        
        void operator *=  (const double multiplier){
            inches = inches * multiplier;
            feet = feet * multiplier + (inches / 12);
            inches = inches % 12;
        }

        void print(){
            cout << feet << " ft. " << inches << " inches";
        }
};


// driver 
int main()
{
    // initializing variables
    Length l1(5, 11), l2(5, 9), sum;

    // summation
    sum = l1+l2;
    cout << "Sum of l1 and l2 is ";
    sum.print();
    cout << endl << endl;

    // less than comparison
    if(l1 < l2){
        l1.print();
        cout << " is less than ";
        l2.print();
    }
    else{
        l1.print();
        cout << " is greater than ";
        l2.print();
    }
    cout << endl << endl;
    

    // equal to comparison
    if(l1 == l2){
        l1.print();
        cout << " is equal to ";
        l2.print();
    }
    else{
        l1.print();
        cout << " is not equal to ";
        l2.print();
    }
    cout << endl << endl;
    l1.print();

    
    // constant multiplier
    l1 *= 23;
    cout << " after multiplying it by 23 is ";
    l1.print();

    return 0;
}

