//Write a program to find maximum of three numbers using if else and conditional operator
#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter the three number:\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2)
	{
		if(n1>n3)
		
			printf("n1=%d is greater\n",n1);
		else
			printf("n3=%d is greater\n",n3);
          }
	else
	{
		if(n2>n3)
			printf("n2=%d is greater\n",n2);
		else
			printf("n3=%d is greater\n",n3);
	}
	//using ternary(conditional opreator)
	int num1,num2,num3;
	printf("enter the numbers:");
	scanf("%d%d%d",&num1,&num2,&num3);
	num1>num3?(num1>num2?printf("num1=%d is greater\n",num1):printf("num3=%d is greater\n",num3)):(num2>num3?printf("num2=%d is greater\n",num2):printf("num3=%d is greater\n",num3));
	return 0;
}
