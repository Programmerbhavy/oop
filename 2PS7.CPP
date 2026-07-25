/*
wap in cpp to demonstrate multiple inheritance using two base classes student and 
sports and a derived class result. accept and display acadamic and sports details.
*/
#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    int rollNo;
    string name;
    int marks;

public:
    void getStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
       
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Academic Marks: ";
        cin >> marks;
    }

    void displayStudent()
    {
        cout << "\nRoll Number : " << rollNo ;
        cout << "\nName    : " << name ;
        cout << "\nMarks   : " << marks ;
    }
};

class Sports
{
protected:
    string game;
    int sportsMarks;

public:
    void getSports()
    {
        cout << "Enter Sport Name: ";
        cin >> game;

        cout << "Enter Sports Marks: ";
        cin >> sportsMarks;
    }

    void displaySports()
    {
        cout << "\nSport        : " << game ;
        cout << "\nSports Marks : " << sportsMarks;
    }
};

class Result : public Student, public Sports
{
private:
    int total;

public:
    void calculate()
    {
        total = marks + sportsMarks;
    }

    void displayResult()
    {
        displayStudent();
        displaySports();
        cout << "\n Total Score  : " << total ;
    }
};

int main()
{
    Result r;

    r.getStudent();
    r.getSports();
    r.calculate();
    r.displayResult();

    return 0;
}
