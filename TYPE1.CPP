#include<iostream>
#include<conio.h>
using namespace std;

class numbers 
{
    public:
    int num;

    numbers()
    {
        num=0;
    }
    numbers(int n)
    {
        num=n;
    }

//to convert class type to basic type
operator int()
{
    return num;
}
void display()
{
    cout<<"\n value of numbers is "<<num;
}
};
int main()
{
    numbers obj(80);
    int a;
    a=obj;
    cout<<"\n A recevide value from obj "<<a;
    obj.display();
    return 0; 
}