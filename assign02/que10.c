//Write a program to accept a character c and display category of the input character.
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)

		printf("It is an Uppercase leter\n");

	else if(ch>=97&&ch<=122)
		printf("It is lowercase letter\n");
	else if(ch>=48&&ch<=57)
		printf("It is a Digit\n");
	else if(ch==32)
		printf("It is a space\n");
	else if(ch==9)
		printf("It is a tab\n");
	else if(ch==13)
		printf("It is carriege return\n");
	else if(ch==10)
		printf("It is a new line\n");
	else
		printf("Other");





	return 0;
}
