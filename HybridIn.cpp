/*
Hybrid Inherintance Example
*/

#include<iostream>
using namespace std;

class a
{
    public:
    void showa()
    {
        cout<<"\n class a";
    }
};
class b : public a
{
    public:
    void showb()
    {
        cout<<"\n class b";
    }
};
class c
{
    public:
    void showc()
    {
        cout<<"\n class c";
    }
};
class d : public b,public c
{
    public:
    void showd()
    {
        cout<<"\n class d";
    }
};
int main()
{
    d obj;
    obj.showa();
    obj.showb();
    obj.showc();
    obj.showd();
    return 0;
}