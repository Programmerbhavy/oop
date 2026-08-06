#include<iostream>
#include<string.h>
using namespace std;

class number 
{
    public:
    int n;
    number()
    {
        n=0;
    }
    number(int a)
    {
        n=a;
    }
    number operator + (const number &obj)
    {
        number temp;
        temp.n = n + obj.n;
        return temp;
    }
    void display()
    {
        cout<<"\n value is "<<n;
    }
};
int main()
{
    number n1(5),n2(10),n3;
    n3= n1+n2;
    n3.display();
    return 0;.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
}