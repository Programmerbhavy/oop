/*
WAP TO CREATE A BASE CLASS EMPLOYEE WITH DATA MEMBER EMPID AND NAME.DERIVE A CLASS MANAGER WITH A 
DATA MEMBER DEPARTMENT.ACCEPT AND DISPLAY ALL DITAILS
*/
#include<iostream>
#include<string.h>

using namespace std;

class employee
{
    public:
    int eid;
    string name;
    void getemployee()
    {
        cout << "\nEnter Name: ";
        cin >> name;
        cout << "\nEnter ID: ";
        cin >> eid;
    }
    void displayemp()
    {
        cout<<"\nname :-"<<name;
        cout<<"\nID :-"<<eid;
    }
};

class manager : public employee
{
    private:
    string dept;

    public:
        void getmanager()
        {
            getemployee();
            cout<<"\n enter a department :-";
            cin>>dept;
        }
        void displaymanager()
        {
            displayemp();
            cout<<" Department :- "<<dept;
        }

};
int main()
{
    manager m1;
    m1.getmanager();
    m1.displaymanager();
    return 0;
}

