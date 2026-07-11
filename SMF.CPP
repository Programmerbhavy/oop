#include<iostream.h>
#include<conio.h>

class maths
{
 public:
 static int a,b;
 int x;

 static void addition()
 {
  cout<<"\n addition is "<<(a+b);
 }

};
   int maths::a=10;
   int maths::b=9;

void main(){
clrscr();
maths::addition();
getch();
}