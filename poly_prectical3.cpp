/*
wap in cpp to create a class distance containing feet and inches as data member. overload the + operator
to add two distance objects. if the total number of inches is 12 or more ,convert the execess inches
into feet . display the resulting distance
*/ 
#include<iostream>
using namespace std;
class Distance
{
     public:

     int feet;
     int inches;

     Distance()
     {
        feet=inches=0;
     }
     Distance(int f ,int i)
     {
        feet =f;
        inches = i;

     }
     Distance operator +(const Distance &obj)
     {
        Distance temp;
        temp.feet = feet + obj.feet;
        temp.inches = inches + obj.inches;

        while(temp.inches >= 12)
        {
            temp.inches -= 12;
            temp.feet += 1;
        }
            return temp;
     }

     void display()
     {
        cout<<"\n feet "<<feet<<"\n inch "<<inches;
     }
};
int main()                                                                                                                       
{
    Distance d1(10,12) , d2(5,14) , d3;
    d3 = d1+d2;
    d3.display();

    return 0;

}