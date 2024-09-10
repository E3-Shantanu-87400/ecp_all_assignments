#include<stdio.h>
int main()
{
	int a,b,sum,product,diff;
	printf("Enter the two number :");
	scanf("%d%d",&a,&b);
	sum=a+b;
	product=a*b;
	diff=a-b;
	printf("sum=%d\n product=%d\n  difference=%d\n",sum,product,diff);
	return 0;
}
