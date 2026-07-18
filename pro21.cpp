/*
 wap to create a student class where name and roll no are private data members use public setter 
 and getter function to assign and display the students details 
*/
#include<iostream>
using namespace std;

class student
{
    private:
       char *name;
       int rno;
    public:
       void setdata()
    {
        cout<<"\n Enter student name:- ";
        cin>>name;
         cout<<"\n Enter student rollno:- ";
        cin>>rno;

    }
          void display()
          {
          cout<<"\n Display data :- "<<name;
          cout<<"\n Display data :- "<<rno;
          }
};
int main()
{
    student obj1,obj2;
    system("cls");
    
}