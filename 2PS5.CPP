/*
WAP TO CREATE A BASE CLASS PARENT AND A DERIVED CLASS CHILD TO
DEMONSTRATE THE ORDER OF EXECUTION OF CONSTRUCTOR AND DESTRUCTOR
*/
#include <iostream>
#include<string.h>
using namespace std;


class parent
 {
public:
int n;
parent()
{
    n=0;
}
parent(int a)
{
    n=a;
    cout<<"\n parent constructor called";
}
~parent()
{
    cout<<"\n destructor called";
}
};
class derived : public parant
{
    public:
    int p;
    derived()
    {
        p=0;
    }
    derived(int a,int b) : parent(a)
};