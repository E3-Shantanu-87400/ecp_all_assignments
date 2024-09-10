//cal product and sum using global variables
#include<stdio.h>
int a,n1,n2,sum,ppro,*ptr1,*ptr2;
int accept_num(void);
int cal(int*ptr1,int *ptr2,int *ppro);

int main()
{
	n1=accept_num();
	n2=accept_num();
	sum=cal(&n1,&n2,&ppro);
	printf("addition=%d\n",sum);
	printf("Product is=%d\n",ppro);
	return 0;
}
int cal(int *ptr1,int *ptr2,int *ppro)
{
	*ppro=(*ptr1)*(*ptr2);
	return *ptr1+*ptr2;
}
int accept_num(void)
{
	printf("Enter the numbers:");
	scanf("%d",&a);
	return a;
}
