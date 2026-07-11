/* create a class bank aacount with data member balance and
member function withdrawal , deposite and show balance and
add private access specifier to balance variable */
#include<iostream.h>
#include<conio.h>

class bankac{
double balance;
public:

 void deposite(double amount)
 {
   balance = 900;
   balance = balance + amount;
 }

 void withdrawal(double amount)
 {
  balance -=amount;
 }
 void showbalance()
 {
  cout<<"final balance"<<balance;
 }
};

void main()
{
bankac b1;
clrscr();
b1.deposite(2000);
b1.withdrawal(500);
b1.showbalance();
getch();
}