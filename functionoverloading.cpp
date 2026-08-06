#include<iostream>
#include<string.h>
using namespace std;

class addition
{
    public:
    void add(int a ,int b)
    {
        cout<<"\n addition is "<<(a+b);
    }
    void add(int a,int b , int c)
    {
        cout<<"\n addition is "<<(a+b+c);
    }
    void add(float a , float b,float c, float d)
    {
        cout<<"\n addition is "<<(a+b+c+d);
    }
};
int main()
{
    addition obj;
    obj.add(11,67);
    obj.add(1,2,3);
    obj.add(1.1,2.2,3.3,4.5);
    return 0;
}