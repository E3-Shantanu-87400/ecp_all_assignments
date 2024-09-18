#include<stdio.h>
int main()
{
int n1,res,i;
printf("Enter the number:");
scanf("%d",&n1);
for(i=1;i<=10;i++)
{
    res=n1*i;
    printf("%d * %d = %d\n",n1,i,res);
}
return 0;
}
