/*
wap in cpp create a person,student,teacher and exam classes with constrains as folows student 
class is inhe. from person class ,exam class is inher. from both student and teacher class. 
define suitable data member and member function in each class. create an object of exam class to
display all details.
*/
#include<iostream>
using namespace std;

class person
{
    public:
    char pname[100];
    void getpname()
    {
        cout<<"\n enter your pname :-";
        cin>>pname;
    }
};
class student : public person
{
    public:
    char sname[100];
    void getsname()
    {
        cout<<"\n enter your sname :-";
        cin>>sname;
    }
};
class teacher
{
    public:
   char tname[100];
    void gettname()
    {
        cout<<"\n enter your tname :-";
        cin>>tname;
    }
};
class exam : public student,public teacher
{
    public:
    int marks;
    void getmarks()
    {
        cout<<"\n enter your marks :-";
        cin>>marks;
    }
    void showdata()
    {
        cout<<"\nperson name :-"<<pname;
        cout<<"\nstudent name :-"<<sname;
        cout<<"\nteacher name :-"<<tname;
        cout<<"\nmarks :-"<<marks;
    }
};
int main()
{
    exam obj;
    obj.getpname();
    obj.getsname();
    obj.gettname();
    obj.getmarks();
    obj.showdata();
    return 0;
}