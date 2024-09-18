#include<stdio.h>
int main()
{
int n1; 
printf("Enter the number:");
scanf("%d",&n1);
printf("The factors of %d are=",n1);
for(int i=1;i<=n1;i++)
{
    if(n1%i==0)
    printf("%4d",i);
}
return 0;
}
