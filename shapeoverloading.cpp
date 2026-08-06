#include<iostream>
#include<string.h>
using namespace std;

class shape
{
    public:
    void area(int l)
    {
        cout<<"\n area of square "<<(l*l);
    }
    void area(int l ,int b)
    {
        cout<<"\n area of rectangle "<<(l*b);
    }
    void area(double r)
    {
        cout<<"\n area of cicule "<<(3.14*r*r);
    }
};
int main()
{
    shape obj;
    obj.area(5); //squre
    obj.area(5,8); //rectangle
    obj.area(6.5); //circle
    return 0;
}