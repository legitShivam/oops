#include <iostream>
using namespace std;


class Exam;
class Result;


class Marks{
    private:
        int english, hindi, maths, science, social_science, total;

    public:
        // default constructor
        Marks(){
            english = 0;
            hindi = 0;
            maths = 0;
            science = 0;
            social_science = 0;
            total=0;
        }

        // parameterized constructor
        Marks(int english, int hindi, int maths, int science, int social_science){
        this->english = english;
        this->hindi = hindi;
        this->maths = maths;
        this->science = science;
        this->social_science = social_science;
        this->total = english + hindi + maths + science + social_science;
        }

        friend class Exam;
        friend class Result;

};


class Student{
    protected:
        string name;
        string email;
        string address;
        int roll_no;

    
    public:
        // default constructor
        Student(){
            this->name = "No Name";
            this->email = "No Email";
            this->address = "No Address";
            this->roll_no = 0;
        }

        // Parameterized Constructor
        Student(string name, string email, string address, int roll_no){
            this->name = name;
            this->email = email;
            this->address = address;
            this->roll_no = roll_no;
        }
};


class Exam: public Student{

    protected:
        Marks marks;

    public:
        // Parameterized Constructor
        Exam(string name, string email, string address, int roll_no, Marks marks) 
        : Student{name, email, address, roll_no}{
            this->marks.english = marks.english;
            this->marks.hindi = marks.hindi;
            this->marks.maths = marks.maths;
            this->marks.science = marks.science;
            this->marks.social_science = marks.social_science;
            this->marks.total = marks.total;
        }
    
};


class Result: public Exam{
    protected:
        int total_marks;

    public:
        Result(string name, string email, string address, int roll_no, Marks marks)
        : Exam{name, email, address, roll_no, marks}{
            this->total_marks = marks.total;
        }

        void display(){
            cout << "------------------------------" << endl;
            cout << "Name: " << this->name << endl;
            cout << "Email: " << this->email << endl;
            cout << "Address: " << this->address << endl;
            cout << "Roll No: " << this->roll_no << endl;
            cout << "Total Marks: " << this->total_marks << endl;
        }
};


// driver code
int main(){
    Marks marks1(100, 80, 90, 67, 78);
    Result result1{"Rahul", "rahul@gmail.com", "Delhi", 1, marks1};
    result1.display();
}