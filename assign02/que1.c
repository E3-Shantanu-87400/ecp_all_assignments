/*Write a program to accept two numbers and display division of the two numbers.Check for divide by zero error. If divider is zero then display appropriate error message.*/
#include<stdio.h>
int main()
{
	int num1,num2;
	float Div;
	printf("Enter the two numbers:\n");
	scanf("%d%d",&num1,&num2);
	Div=(float)num1/num2;
	if(num2==0)
	printf("ERROR\n");
	printf("%f\n",Div);
	return 0;
}
