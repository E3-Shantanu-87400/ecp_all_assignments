#include<stdio.h>

int main()
{
  int n1,a,d,rem,b,c,p;	
  printf("Enter the 4 digit number:");
  scanf("%d",&n1);
  a=n1/1000;
  printf("%d",a);
  rem=n1%1000;
  d=rem/100;
  printf(" %d",d);
  b=rem%100;
  c=b/10;
  printf(" %d",c);
  rem=b%10;
  printf(" %d\n",rem);
  printf("Rev no is=%d %d %d %d",rem,c,d,a);

return 0;

}

