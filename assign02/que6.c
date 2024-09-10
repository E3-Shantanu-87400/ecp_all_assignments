//Write a program to accept a 5 digit number and check whether it is a numeric palindrome (Ifreversed number is same as entered number it is called palindrome).
#include<stdio.h>
int main()
{
	int n1,rem=0,c;
	printf("Enter thr five digit number:");
	scanf("%d",&n1);
	while(n1>0)
	{
	  c=n1%10;
	  rem=rem*10+c;
	  n1=n1/10;
	}
	if(rem=n1)
	printf("The given number is palindrom\n");
	else
	printf("!palindrome\n");
	return 0;
}
