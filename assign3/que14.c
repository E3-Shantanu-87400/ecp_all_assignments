//Write a program to accept a number and check whether it is Prime no.
#include<stdio.h>
int main()
{
int n1,rem,i;
printf("Enter the num:");
scanf("%d",&n1);
for(i=2;i<=n1/2;i++)
{
  if(n1%2==0)
{
   printf("Not prime\n");
  goto end;
}
else
{
  printf("Prime\n");
   goto end;
}
}
end:
return 0;
}
