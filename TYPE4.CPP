#include<iostream>
#include<conio.h>
using namespace std;

class liter
{
    public:
    int l;

    liter(int n=0)
    {
        l=n;
    }
};
class milileter
{
    public:
    int ml;
    
        milileter()
        {
            ml=0;
        }
    
        milileter(liter obj)
        {
            ml = obj.l *1000;
        }
        void display()
        {
            cout<<"\n Kilometer to Meter "<<ml;
        }
    
};
int main()
{
    liter l(50);
    milileter ml;
    ml=l;
    ml.display();
    return 0;
}