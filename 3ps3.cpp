/*
wa cpp program to create a base class bankaccount containing a protected balance
derive a class savingaccount that containing sales amount and add interest to 
the balance 
*/
#include<iostream>
using namespace std;

 class bankaccount
 {
    protected:
        int balance;

    void getdata()
    {
        cout<<"\n Enter a balance :-";
        cin>>balance;
    }
    void display()
    {
        cout<<"balance :"<< balance;
    }
 };
 class savingaccount : public bankaccount
 {
    public:

    int intrest;
    int total;

    void getdatas()
    {
        getdata();
        cout<<"\n Enter a intrest :-";
        cin>>intrest;
    }
    void displays()
    {
        display();
        intrest = balance * intrest /100;
        total = intrest + balance;
        cout<<"\n intrest :"<< intrest;
        cout<<"\n total :"<<total;
    } 
 };

 int main()
 {
    savingaccount b;

    b.getdatas();
    b.displays();

    return 0;
 }