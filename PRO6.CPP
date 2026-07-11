//strcmp
#include<iostream.h>
#include<string.h>
#include<conio.h>

void main()
{
	clrscr();
	char s1[20] = "HELLO";
	char s2[20] = "HELLO";
	if(strcmp(s1,s2)==0)
	cout<<"string are equal";
	else
	cout<<"string are not equal";
	getch();
}
