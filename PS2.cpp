/* wap to create an employee class and use an inline function to calculate the gros salary from the basic salary */

#include<iostream>
using namespace std;

class employee{
       public:
       int basics;

       void getdata()
       {
            cout<<"\n Enter Basic salary :-";
            cin >> basics;
          
       }

       inline void cal(int hra,int da,int pf)
       {
              int gross = basics + hra + da - pf;
              cout<<"\n gross salary :- "<<gross;
        
       }
       
};

int main()
{
    employee e1;
    e1.getdata();
    e1.cal(5000,500,1000);
    return 0;
}