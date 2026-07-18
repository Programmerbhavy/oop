/*wap to create a bank account class with data member for account number,balance,and an interest rate of 8.5%. implement a private 
member function to calculate the interest and access it through a public member function */


#include<iostream>
using namespace std;

class bankaccount{
    private:
     int ano;
     float balance;
     float intrest;

     void getdata(){
     cout<<"\n Enter a account no :-";
     cin>>ano;
     cout<<"\n Enter a balance :- ";
     cin>>balance;
}
  float cal()
  {
    float ci;
    intrest = 8.5;
    ci=(balance * intrest)/100;
    return ci;

  }
public:
void display()
{
    getdata();
    int i = cal();
    cout<<"\n intrest is "<<i;
}
};
int main()
{
   bankaccount obj1;

   obj1.display();
   return 0;

}