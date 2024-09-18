#include<stdio.h>
#include<math.h>

void armstrong(int min,int max);
int main()
{
	int min,max;
	printf("Enter min and max no :");
	scanf("%d%d",&min,&max);
	armstrong(min,max);
	return 0;
}

void armstrong(int min,int max)
{
	int rem, arm , temp;
	for(int i=min; i<=max; i++)
	{
		temp = i;
		arm = 0;
		while(temp != 0)
		{
			rem = temp % 10;
			temp /= 10;
			arm = arm + (rem*rem*rem);
		}
		if(arm==i)
		{
			printf("%d ",i);
		}
	}
	printf("\n");
}
