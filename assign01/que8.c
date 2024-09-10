//write a program to accept 3 integer no & find its average
#include<stdio.h>
int main()
{
 int n1,n2,n3,sum,
   float avg;
 printf("Enter the three numbers:");
 scanf("%d %d %d" , &n1,&n2,&n3);
 sum=n1+n2+n3;
 avg=sum/3;
 printf("\navg is=%f",avg);
return 0;
}
