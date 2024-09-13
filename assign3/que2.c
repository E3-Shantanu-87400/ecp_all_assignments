//Write a program to print table of given number.
#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter the num:");
	scanf("%d",&num);
	for(i=1;i<11;i++)
	{
 		int res=num*i;
		printf("%d * %d = %d\n",num,i,res);
	}

	return 0;
}
