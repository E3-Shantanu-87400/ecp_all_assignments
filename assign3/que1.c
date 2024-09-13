//Write a program to accept a character and a number, and print the character number times
#include<stdio.h>
int main()
{
	int num;
	char ch;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("Enter the character:");
	scanf("%*c%c",&ch);
	int i;
	printf("Output is:");
	while(i<num)
	{
		printf("%c",ch);

		i++;
	}

	return 0;
}
