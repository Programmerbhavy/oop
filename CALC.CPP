#include<iostream>
#include<conio.h>

class calculatore
{
 public:
 static int a;
 int x;

 static void squre()
 {
  cout<<"\n squre is "<<(a*a);
 }
 static void cube()
 {
  cout<<"\n cube is "<<(a*a*a);
 }

};
   int calculatore::a=5;


voi main(){
clrscr();
calculatore::squre();
calculatore::cube();
getch();
}