/*
WAP in cpp to create a person class derive teacher and student classes from person and 
them derive a result class from both teacher and student.use virtual inhetintance 
to avoid the diamond problem. 
*/

#include <iostream>
#include <string>
using namespace std;


class Person
{
protected:
    string name;
    int age;

public:
    void getPerson()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson()
    {
        cout << "\nName : " << name ;
        cout << "\nAge  : " << age;
    }
};

class Teacher : virtual public Person
{
protected:
    string subject;

public:
    void getTeacher()
    {
        cout << "Enter Subject: ";
        cin >> subject;
    }

    void displayTeacher()
    {
        cout << "\nSubject : " << subject;
    }
};

class Student : virtual public Person
{
protected:
    int marks;

public:
    void getStudent()
    {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayStudent()
    {
        cout << "\nMarks   : " << marks;
    }
};

class Result : public Teacher, public Student
{
public:
    void displayResult()
    {
        displayPerson();
        displayTeacher();
        displayStudent();
    }
};

int main()
{
    Result r;

    r.getPerson();
    r.getTeacher();
    r.getStudent();

    cout << "\n----- Result -----";
    r.displayResult();

    return 0;
}





