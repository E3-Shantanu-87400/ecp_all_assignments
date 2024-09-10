#include<stdio.h>
int main()
{
	int n1;
	printf("Enter the number:");
	scanf("%d",&n1);
        
/*	printf("1.%d",n1*1);
	printf("\n2.%d",n1*2);
	printf("\n3.%d",n1*3);
	printf("\n4.%d",n1*4);
	printf("\n5.%d",n1*5);
	printf("\n6.%d",n1*6);
	printf("\n7.%d",n1*7);
	printf("\n8.%d",n1*8);
	printf("\n9.%d",n1*9);
	
	printf("\n10.%d",n1*10);*/
	
        for(int i=1;i<=10;i++)
	{
		printf("%d\n",n1*i);
	}
	return 0;
}
