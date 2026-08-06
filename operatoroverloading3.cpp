#include<iostream>
#include<string.h>
using namespace std;

class number 
{
    public: 
    int n;
    number(int x)
    {
        n=x;
    }
    number operator + (const number &obj)
    {
        number temp(0);
        temp.n = n + obj.n;
        return temp;
    }
    bool operator == (const number &obj1)
    {
        if(n==obj1.n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool operator > (const number &obj1)
    {
        if(n>obj1.n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void display()
    {
        cout<<"\n value is "<<n;
    }
};
int main()
{
    number obj1(5),obj2(10),obj3(0);
    obj3= obj1 + obj2;
    obj3.display();
    number n1(5),n2(10);
    if(n1==n2)
    {
        cout<<"\n both are equal";
    }
    else
    {
        cout<<"\n both are not equal";
    }
    if(n1>n2)
    {
        cout<<"\n n1 is greater than n2";
    }
    else
    {
        cout<<"\n n2 is not greater than n1";
    }
    return 0;
}