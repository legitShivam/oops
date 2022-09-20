#include<iostream>
using namespace std;

class Computer1;
class Computer2;

void swap(Computer1 &c1, Computer2 &c2);

class Computer1{
    private:
        int ram;
    
    public:
        Computer1(int ram){
            this->ram = ram;
        }

        friend void swap(Computer1* a, Computer2* b);

        int spec(){
            return ram;
        }
};

class Computer2{
    private:
        int ram;
    
    public:
        Computer2(int ram){
            this->ram = ram;
        }

        friend void swap(Computer1* a, Computer2* b);

        int spec(){
            return ram;
        }
};

void swap(Computer1* a, Computer2* b){
    int temp = a->ram;
    a->ram = b->ram;
    b->ram = temp;
}


//driver code
int main(){
    Computer1 c1(8);
    Computer2 c2(16);

    cout << "Before swap: " << endl;
    cout << "c1: " << c1.spec() << endl;
    cout << "c2: " << c2.spec() << endl << endl;

    swap(&c1, &c2);

    cout << "After swap: " << endl;
    cout << "c1: " << c1.spec() << endl;
    cout << "c2: " << c2.spec() << endl;

    return 0;
}