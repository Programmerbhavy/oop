/*
WAP to using a friend function to find the larger of two number stored in different number
*/

#include<iostream>
using namespace std;

class number1
{
    private:
    int n1,n2;
    void getdata()
    {
       cout<<"\n enter n1&n2 :- ";
       cin>>n1>>n2;
    }
    
    friend void getlargernumber(number1 obj);
};

void getlargernumber(number1 obj1)
{
    obj1.getdata();
    if(obj1.n1>obj1.n2)
    {
        cout<<"\n n1 is larger";
    }
    else
    {
        cout<<"\n n2 is a larger";
    }
}
int main()
{
    number1 obj;
    getlargernumber(obj);
    return 0;
}