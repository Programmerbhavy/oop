/*
WAP in cpp create a base class person containing name and age. derive a class collegestudent 
containing roll number,course name , and percentage. accept and display the complete student profile.   
*/

#include<iostream>
using namespace std;

class student
{
    public:
    char name[100];
    int age;


    void getdata()
    {
        cout<<"\n Enter student name:-";
        cin>>name;
        cout<<"\n Enter student age:-";
        cin>>age;
    }
};

class college : public student
{

    public:
    int roll;
    char course[100];
    float per;

    void getpersonal()
    {
       cout<<"\n Enter student roll no:-";
       cin>>roll;

       cout<<"\n Enter student course:-";
       cin>>course;

       cout<<"\n Enter student percentage:-";
       cin>>per;
    }

    void display()
    {
            cout<<" ==================== student Details ==================== ";

        cout<<"\nstudent name :- "<<name;
        cout<<"\nstudent age :- "<<age;
        cout<<"\nstudent roll no :- "<<roll;
        cout<<"\nstudent course :-"<<course;
        cout<<"\nstudent percentage :-"<<per;
        
    }
};
int main()
{
    college c;

        c.getdata();
        c.getpersonal();
        c.display();

        return 0;
}