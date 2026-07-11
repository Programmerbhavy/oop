/* create a class employee with data members eid,ename,basic salary,pf and
 member function or get data and display for employee details */

#include<conio.h>
#include<iostream.h>
#include<string.h>
class employee
{
	public:
	//data members
	int eid;
	char *ename;
	float bsalary;
	float pf;

	void getdata()
	{
	    cout<<"\n Enter eid & ename & bsalary & pf :- \n ";
	    cin>>eid>>ename>>bsalary>>pf;


	}
	void display()
	{
	    int netsalary = 0;
	    netsalary = bsalary - pf;
	    cout<<"\n Eid"<<eid;
	    cout<<"\n Name "<<ename;
	    cout<<"\n bsalary "<<bsalary;
	    cout<<"\n PF "<<pf;
	    cout<<"\n final salary "<<netsalary;
	}
};

void main()
{
	//object
	employee obj1;
	clrscr();

	obj1.getdata();
	obj1.display();

	getch();

}