/*
wap 
*/
#include<iostream>
using namespace std;

class parent
{
    public:
    parent()
    {
        cout<<"\n parent constructor called";
    }
    ~parent()
    {
        cout<<"\n parent destructor called ";
    }
    };
class child : public parent
{
    public:
    child()
    {
        cout<<"\n child constructor called";
    }
    ~child()
    {
        cout<<"\n child destructor called ";
    }
};
int main()
{
    child c;
    return 0;
}