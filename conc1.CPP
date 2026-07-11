/*
wap create product class with pid,pname and cost,create default , parameteris and copy constructor , destructor to create objects
and display the details of product.
*/
#include<iostream.h>
#include<conio.h>


class product{
  int pid,cost;
  char *pname;
  
  public:
  //default constructor
  product()
 {
    pid = 101;
    pname="default";
    cost = 500;
  }

  //parameter constructor
  product(int p,char *pn,int c)
  {
       pid =p;
       pname =pn;
       cost=c;
  }

  //copy constructor
  product(product &s)
  {
      pid = s.pid;
      pname = s.pname;
      cost = s.cost;

  }
     void display() {
	cout << "\nProduct ID: " << pid;
	cout << "\nProduct Name: " << pname;
	cout << "\nProduct Cost: " << cost;
	}
  //destructor

   ~product()
 {
	cout << "Product destroyed: ";
 }
};


void main()
{
    product obj1;
    product obj2(101,"bhavy",500); //parameter
    product obj3(obj2); //copy
    product obj4 = obj1;
    clrscr();

    cout<<"\nobject1\n";
    obj1.display();

    cout<<"\nobject2";
    obj2.display();

    cout<<"\nobject3";
    obj3.display();

    cout<<"\nobject4";
    obj4.display();

    getch();
}
