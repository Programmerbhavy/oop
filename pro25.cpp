#include<iostream>
using namespace std;

class vehicle
{
    private:
    string companyname;
    public:
    vehicle(string n)
    {
        companyname = n;
        cout<<"\n vehical constructor called";
    }
    ~vehicle()
    {
        cout<<"\n vehical destructor called";
    }

    };
class car : public vehicle
{
    private:
    int modelno;
    public:
    car(string cname,int mno): vehicle(cname)
    {
        modelno=mno;
        cout<<"\n car constructor called";
    }
    ~car()
    {
        cout<<"\n car destructor called";
    }

};
int main()
{
    car c("verna",00);
    return 0;
}
