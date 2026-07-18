/*
WAP TO CREATE A BASE CLASS PERSON AND A DERIVED CLASS EMPLOYEE USE CONSTRUCTOR IN BOTH 
CLASSES AND DEMONSTRATE THE ORDER OF CONSTRUCTOR CALLS.
*/

#include <iostream>
#include<string.h>
using namespace std;


class Person
 {
protected:
    string name;
    int age;

public:
    
    Person(string n, int a)
     {
        name = n;
        age = a;
        cout << "\n Person Constructor : " << name << "\n Age: " << age;
    }

    void display()
     {
        cout << "\n Name: " << name << "\n Age: " << age;
    }
};


class Employee : public Person
 {
private:
    int empID;
    double salary;

public:
    
    Employee(string n, int a, int id, double sal) : Person(n, a)
     {
        empID = id;
        salary = sal;
        cout << "\n Employee Constructor: ID: " << empID << " \nSalary: " << salary;
    }

    void display() {
        Person::display();
        cout << "\n Employee ID: " << empID << " \nSalary: " << salary;
    }
};

int main() {
    cout << "=== \n Constructor Call Order ===";
    Employee emp(" BHAVY ",19, 1001, 50000.50);
    
    cout << "\n=== Employee Details ===";
    emp.display();

    return 0;
}
