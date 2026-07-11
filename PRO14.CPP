/*
wap to create student class to get the details and display it.using member
function created outside the class
*/

#include<iostream.h>
#include<conio.h>

class student{
int sid;
char*sname;

public:
void getdata();

void display()
{
 cout<<"\n sid"<<sid;
 cout<<"\n sname"<<sname;
}
};

void student::getdata()
{
  cout<<"\n enter sid & sname";
  cin>>sid>>sname;
}
void main()
{
 student s1;
 clrscr();
 s1.getdata();
 s1.display();
 getch();
 }