/*
wap in cpp to create two base classes teacher and student,each having a function display()
derive a class person from both classes and resolve the ambiguity using the scop resolution
opertator.
*/

#include <iostream>
using namespace std;

class Teacher
{
public:
    void display()
    {
        cout << "it's Teacher class.";
    }
};


class Student
{
public:
    void display()
    {
        cout << "\n it's Student class." ;
    }
};


class Person : public Teacher, public Student
{
public:
    void show()
    {
        Teacher::display();   
        Student::display();   
    }
};

int main()
{
    Person p;
    p.show();

    return 0;
}
