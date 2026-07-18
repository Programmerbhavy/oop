/* WAP to create a student class with data member sid and sname and member 
function to accept and display the ditails of three student */

#include<iostream>
#include<conio.h>

using namespace std;

class student 
{
    public:
    int sid;
    char sname[70];

    void getdata()
    {
        cout<<"\n enter sid :-";
        cin>>sid;
        cout<<"\n enter name :-";
        cin>>sname;
    }

    void display()
    {
        cout<<"\n sid :- "<<sid;
        cout<<"\n name :- "<<sname;
    }
};
int main()
{
    student s1,s2,s3;
    system("cls");
    s1.getdata();
    s2.getdata();
    s3.getdata();

    s1.display();
    s2.display();
    s3.display();
   
    return 0;
}