//write a function for swapping of tw numers using pointers
#include<stdio.h>
int accept_num(void);
//void print_msg(void);
void swap(int *ptr1,int *ptr2);
int main()
{
	int n1,n2;
	n1=accept_num();
	n2=accept_num();
	printf("Before swapping n1=%d n2=%d\n",n1,n2);
	swap(&n1,&n2);
	printf("After swapping n1=%d n2=%d\n",n1,n2);
	return 0;
}
int accept_num(void)
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	return a;
}
void swap(int *ptr1,int *ptr2)
{
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=*ptr1;
}
