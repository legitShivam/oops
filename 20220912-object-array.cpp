#include <iostream>
#include <cstring>

using namespace std;

class Person;

class Salary{
    private:
        float basic_salary;
        float house_rent_allowance;
        float medical_allowance;
        float dearness_allowance;
        float income_tax;
        float gross_salary;

        friend class Person;
};


class Person{
    private:

        // employee name
        char name[64];
        // employee age
        int age;
        // employee address
        char address[64];
        // employee salary
        Salary salary;

    public:
        
        // employee count
        static int employee_ages[100], employee_count;

        // salary slip generator
        void salary_slip(){
            cout << "\n\n---------------------------------" << endl;
            cout << "Name                   : " << name << endl;
            cout << "Age                    : " << age << endl;
            cout << "Address                : " << address << endl;
            cout << "Basic Salary           : " << salary.basic_salary << endl;
            cout << "House Rent Allowance   : " << salary.house_rent_allowance << endl;
            cout << "Medical Allowance      : " << salary.medical_allowance << endl;
            cout << "Dearness Allowance     : " << salary.dearness_allowance << endl;
            cout << "Income Tax             : " << salary.income_tax << endl;
            cout << "Gross Salary           : " << salary.gross_salary << endl;
        }


        // default constructor
        Person(){
            strcpy(name, "No name");
            age = 0;
            strcpy(address, "No address");
            salary.basic_salary = 0;
            salary.house_rent_allowance = 0;
            salary.medical_allowance = 0;
            salary.dearness_allowance = 0;
            salary.income_tax = 0;
            salary.gross_salary = 0;

            // increment employee count and add age to array
            employee_ages[employee_count] = this->age;
            employee_count++;
        }

        // parameterized constructor
        Person(string name, int age, string address, float basic_salary, 
        float house_rent_allowance, float medical_allowance, float dearness_allowance, 
        float income_tax){

            strcpy(this->name, name.c_str());
            this->age = age;
            strcpy(this->address, address.c_str());
            this->salary.basic_salary = basic_salary;
            this->salary.house_rent_allowance = house_rent_allowance;
            this->salary.medical_allowance = medical_allowance;
            this->salary.dearness_allowance = dearness_allowance;
            this->salary.income_tax = income_tax;
            this->salary.gross_salary = (basic_salary + house_rent_allowance + 
            medical_allowance + dearness_allowance - income_tax);

            // increment employee count and add age to array
            employee_ages[employee_count] = this->age;
            employee_count++;

            // display salary slip
            salary_slip();
        }

        // obtain youngest employee age and eldest employee age from array
        inline void youngest_eldest_employee_age(){
            int youngest_employee_age = employee_ages[0], eldest_employee_age = employee_ages[0];
            cout << endl;
            for(int i = 0; i < employee_count; i++){
                if(employee_ages[i] < youngest_employee_age){
                    youngest_employee_age = employee_ages[i];
                }
                if(employee_ages[i] > eldest_employee_age){
                    eldest_employee_age = employee_ages[i];
                }
            }
            cout << "Youngest employee age: " << youngest_employee_age << endl;
            cout << "Eldest employee age: " << eldest_employee_age << endl;
        } 

};

// static member initialization of class Person
int Person::employee_ages[100];
int Person::employee_count = 0;


// driver code
int main(){
    // an array of objects
    Person employees[10] = {
        Person("John", 25, "USA", 10000, 2000, 1000, 1000, 1000),
        Person("Smith", 30, "UK", 20000, 4000, 2000, 2000, 2000),
        Person("David", 35, "Canada", 30000, 6000, 3000, 3000, 3000),
        Person("Rahul", 40, "India", 40000, 8000, 4000, 4000, 4000),
        Person("Raj", 45, "Pakistan", 50000, 10000, 5000, 5000, 5000),
        Person("Rohan", 50, "Bangladesh", 60000, 12000, 6000, 6000, 6000),
        Person("Ramesh", 55, "Nepal", 70000, 14000, 7000, 7000, 7000),
        Person("Rajesh", 60, "Sri Lanka", 80000, 16000, 8000, 8000, 8000),
        Person("Rakesh", 65, "Maldives", 90000, 18000, 9000, 9000, 9000),
        Person("Ramesh", 70, "Bhutan", 100000, 20000, 10000, 10000, 10000)
    };

    employees[0].youngest_eldest_employee_age();
}