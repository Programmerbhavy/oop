#include<iostream>
using namespace std;

class employee
{
    char *ename;
    float salary;
    
    public:
    employee(char *n,float s)
    {
        ename = n;
        salary = s;
    }
    void display() const
    {
        cout<<"\n Employee name :- "<<ename;
        cout<<"\n Enter your salary :- "<<salary;
    }
    void bootsalary(float per)
    {
        float inc;
        inc = (salary *per)/100;
        salary += inc;
        cout<<"\n increse salary is"<<salary<<"\n \n";
    }

};

int main()
{
    employee obj("shriram",50000);
    system("cls"); 
    obj.display();
    obj.bootsalary(10);
    obj.display();
    return 0;
}