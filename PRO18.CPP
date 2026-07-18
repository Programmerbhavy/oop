/* wap to count number of object created by class using static data members
 */
#include <iostream.h>
#include <conio.h>

class number
{
public:
	static int count;
	int a;

	number()
	{
		count++;
	}

	void display()
	{
		a++;
		cout << "\nObject Number: " << count
			 << "  Normal Variable: " << a;
	}
};

int number::count = 0;

void main()
{
	clrscr();

	number n1, n2, n3, n4;

	n1.a = n2.a = n3.a = n4.a = 0;

	n1.display();
	n2.display();
	n3.display();
	n4.display();

	getch();
}