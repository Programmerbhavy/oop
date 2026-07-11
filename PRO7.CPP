//strrev
#include<iostream.h>
#include<string.h>
#include<conio.h>

void main()
{
	clrscr();
	char s1[20];

	cout<<"Enter a string";
	cin>>s1;

	strrev(s1);

	cout<<"Reverse string :"<<s1;
	getch();
}