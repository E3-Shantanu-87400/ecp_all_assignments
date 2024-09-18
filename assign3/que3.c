//Write a program to accept a number and calculate sum of digits of integer and reverse the num
#include<stdio.h>
int main()
{
 int num=9362,rem,sum=0,temp,rev=0;
 printf("The number is=%d\n",num);
temp=num;
while(temp!=0)
{
  rem=temp%10;
  sum=sum+rem;
  temp=temp/10;
}
  printf("The sum of digit is=%d\n",sum);
temp=num;
while(temp!=0)
{
  rem=temp%10;
  rev=rev*10+rem;
  temp=temp/10;
}
printf("The rev number is=%d\n",rev);
if(rev==num)
{
printf("The number is palindrom\n");
}
else
{
printf("The number is not palindronme\n");

}
int n1,arm=0;
printf("enter the number:");
scanf("%d",&n1);
while(n1!=0)
{
   rem=n1%10;
   arm=arm+(rem*rem*rem);
   n1=n1/10;

}
if(arm==n1)
{
 printf("The number is armstrong\n");
}
else
{
printf("The number is not armstrong\n");
}

return 0;
}
