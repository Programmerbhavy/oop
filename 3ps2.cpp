/*
WAP in cpp create a base class employee containing employee name and basic salary derive a class 
salesmanager containing sales amount and commission rate calculate and display the final salary
*/

#include<iostream>
using namespace std;

class employee
{
    public:
    char name[100];
    int salary;


    void getdata()
    {
        cout<<"\n Enter employee name:-";
        cin>>name;
        cout<<"\n Enter employee basic salary:-";
        cin>>salary;
    }
};

class salesmanager : public employee
{

    public:
    float samount;
    float c_rate;
    float f_amount;


    void getsales()
    {
       cout<<"\n Enter sales amount :-";
       cin>>samount;

       cout<<"\n enter commission rate :-";
       cin>>c_rate;

    }

    void display()
    {
            cout<<" ==================== Employee Details ==================== ";

        cout<<"\nEnployee name :- "<<name;
        cout<<"\nEmployee salary :- "<<salary;
        cout<<"\nstudent sales amount :- "<<samount;
        
    }

    void commission()
    {
       c_rate = samount * c_rate/100;
       f_amount = salary + c_rate;

       cout<<"\n commision rate :- "<<c_rate;
       cout<<"\n final salary :- "<<f_amount;
    }

};
int main()
{
    salesmanager c;

        c.getdata();
        c.getsales();
        c.display();
        c.commission();

        return 0;
}