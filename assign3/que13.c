//Write a program to display n terms of Fibonacci series
#include<stdio.h>
int main()
{
 int n1,t1=0,t2=1;
 printf("Enter the number:");
 scanf("%d",&n1);
int next=1;
printf("fibonacci series : %d%d",t1,t2);
 for(int i=3;i<=n1;i++)
   {
    t1=t2;
    t2=next;
    next=t1+t2;
    printf(" %d",next);
   }
return 0;
}
