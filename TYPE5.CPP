#include<iostream>
#include<conio.h>
using namespace std;

class second
{
    public:
    int s;

    second(int n=0)
    {
        s=n;
    }
};
class milisecond
{
    public:
    int ms;
    
        milisecond()
        {
            ms=0;
        }
    
        milisecond(second obj)
        {
            ms = obj.s *1000;
        }
        void display()
        {
            cout<<"\n Second to Milisecond "<<ms;
        }
    
};
int main()
{
    second s(50);
    milisecond ms;
    ms=s;
    ms.display();
    return 0;
}
