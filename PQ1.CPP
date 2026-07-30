/*
WAP IN CPP and create class result the constructor should acceppt marks in three subject calculate and
 display
  - total marks
  - average marks
  using a parameterized constructor and member function.
*/
#include<iostream>
using namespace std;

class result
{
    public:
    int marks1,marks2,marks3;
    result(int m1,int m2,int m3)
    {
        marks1=m1;
        marks2=m2;
        marks3=m3;
    }
    void display()
    {
        int total=marks1 + marks2 + marks3;
        float average = total/3.0;
        
        cout<<"\n total marks :-"<<total;
        cout<<"\n average marks :-"<<average;
    }
};
int main()
{
    int m1,m2,m3;
    cout<<"\n enter marks of three subjects :-";
    cin>>m1>>m2>>m3;
    result obj(m1,m2,m3);
    obj.display();
    return 0;
}