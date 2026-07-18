/*wap to check numbers is odd or even and positive and nagetive using
numbers class and nested members function concept*/

#include<iostream.h>
#include<conio.h>

class members {
	public:
	void checkevenodd(int num)
	{
		if(num%2==0)
			cout<<"Number is even";
		else
			cout<<"Number is odd";
	}
	void checkPositiveNagetive(int num)
	{
		if(num>=0)
			cout<<"\nNumberis Positive";
		else
			cout<<"\nNumberis Negetive";
	}
	void display(int n)
	{
		checkevenodd(n);
		checkPositiveNagetive(n);
	}
};
void main()
{
	members n1;
	clrscr();
	n1.display(9);
	getch();
}