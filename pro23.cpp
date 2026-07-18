/*
wap  tp create demostrate the use of the protected access specifier by creating a base class person with 
protected data member name,age 
*/
#include<iostream>
using namespace std;

class person
{
    protected:
    string name;
    int age;
};

class student : public person
{
    private:
    int marks;
    
    public:
    void getdata()
    {
        cout<<"\n Enter name & age & marks :=";
        cin>>name>>age>>marks;
    }
    void display()
    {
        cout<<"\n Name--"<<name<<"\n Age--"<<age<<"\nMarks--"<<marks;
    }
};

int main()
{
    student s1;
    system("cls");
    s1.getdata();
    s1.display();
    return 0;
}