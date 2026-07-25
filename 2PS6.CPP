/*
WAP TO CREATE A DEMONSTRATE MULTILEVEL INHERITANCE USING THE CLASSES STUDENT , MARKS AND RESULT 
ACCEPT STUDENT DETAILS AND MARKS AND CALCULATE AND DISPLAY THE TOTAL MARKS
*/
#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int rollNo;
    string name;

public:
    void getStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Student Name: ";
        cin >> name;
    }

    void displayStudent()
    {
        cout << "\nRoll Number: " << rollNo;
        cout << "Student Name: " << name;
    }
};

class Marks : public Student
{
protected:
    int m1, m2, m3;

public:
    void getMarks()
    {
        cout << "Enter Marks in 3 Subjects: ";
        cin >> m1 >> m2 >> m3;
    }
};

class Result : public Marks
{
private:
    int total;

public:
    void calculate()
    {
        total = m1 + m2 + m3;
    }

    void displayResult()
    {
        displayStudent();
        cout << "Marks:" <<;
        cout << "Subject 1: " << m1;
        cout << "Subject 2: " << m2;
        cout << "Subject 3: " << m3;
        cout << "Total Marks: " << total;
    }
};

int main()
{
    Result r;

    r.getStudent();
    r.getMarks();
    r.calculate();
    r.displayResult();

    return 0;
}
