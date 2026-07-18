/*wap to find maximum of two numbers using a private member function
and display the resuly through a public function*/
#include<iostream.h>
#include<conio.h>
class number {
	public:
	int a,b;
		private:
	void max()
		{
		if(a>b)
			cout<<"A is the Max";
		else
			cout<<"B is the Max";
	}
	public:
	void getdata()
	{
	cout<<"enter two numbers:";
	cin>>a>>b;
	}

	void display()
	{
		max();
	}
};
void main()
{
	number n1;
	clrscr();
	n1.getdata();
	n1.display();
	getch();
}
