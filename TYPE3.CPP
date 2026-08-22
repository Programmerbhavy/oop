#include<iostream>
#include<conio.h>
using namespace std;

class kilometer
{
    public:
    int km;

    kilometer(int n=0)
    {
        km=n;
    }
};
class meter 
{
    public:
    int mt;
    
        meter()
        {
            mt=0;
        }
    
        meter(kilometer obj)
        {
            mt = obj.km *1000;
        }
        void display()
        {
            cout<<"\n Kilometer to Meter "<<mt;
        }
    
};
int main()
{
    kilometer km(55);
    meter mt;
    mt=km;
   mt.display();
    return 0;
}