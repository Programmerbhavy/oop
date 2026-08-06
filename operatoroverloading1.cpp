#include<iostream>
#include<string.h>
using namespace std;

class number
{
    public:
    int n;
    number(int a)
    {
        n=a;
    }
    void operator -()
    {
        n=-n;
    }
    void display()
    {
        cout<<"\n value is"<<n;
    }
};
int main()
{
    number obj(10);
    obj.display();
    -obj;
    obj.display();
}