//Write a program to accept a number and print its prime factors.
#include<stdio.h>
int main()
{
	int n1,prime;
	printf("Enter the num:");
	scanf("%d",&n1);
	for(int i=2;i<=n1;i++)
	{
		int rem=n1%i;
		if(rem==0)
		{
 			prime=1;
			for(int j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					prime=0;
					break;
					}

			}
                    if(prime==1)
                    printf("%4d",i);
		}


	}
	return 0;
}
