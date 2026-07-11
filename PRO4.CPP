//strcat
#include<iostream.h>
#include<string.h>
#include<conio.h>

void main()
{
	clrscr();
	char s1[20] = "HELLO";
	char s2[20] = "WORLD";

	strcat(s1,s2);
	cout<<"\nConcatenated String :"<<s1;
	getch();

}


