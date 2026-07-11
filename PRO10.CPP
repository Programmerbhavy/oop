/* to create student class with data member roll no and
member function to display student details */

#include<iostream.h>
#include<conio.h>

class student {
public :
//data member
int rno;
char *sname;

void getdata()
{
 cout<<"\n enter rno and sname ";
 cin>>rno>>sname;
}

void display()
{
cout<<"\n roll no "<<rno;
cout<<"\n name "<<sname;
}
};
void main()
{

student s1;
clrscr();
s1.getdata();
s1.display();
getch();

}