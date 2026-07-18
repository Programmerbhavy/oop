/*wap to create number class with check positive numberas private members
funbction of a class and verify number is odd or even*/
#include<iostream.h>
#include<conio.h>
class number {
	public:
	int n;

	private:
	int checkpositive() {
	if(n>0)
		return 1;
	else
		return 0;
	}
	public:
	void checkeven() {
		if(checkpositive()) {
			if(n%2==0)
				cout<<"\nNUmber is even";
			else
				cout<<"\nNumber is Odd";
		}
		else
		{
			cout<<"\nNumber is Negetive";
		}
	}
};
void main()
{
	number n1;
	n1.n = -9;
	clrscr();
	n1.checkeven();
	getch();
}

