//Write a program to accept number and check whether the number is +ve, -ve and zero
#include<stdio.h>
int main()
{
	int n1;
	printf("ENter the num:\n");
	scanf("%d",&n1);
	if(n1==0)
	{
	printf("The num is zero\n");
	}
	else if(n1>0)
	{
	printf("The num +ve\n");
	}
	else
	{
	printf("The num is -ve\n");
	}
	return 0;
}

