//1. Write a function to calculate factorial of a given number.
#include<stdio.h>
int fact(int);
int main()
{
   int n1,res;
   printf("Enter the number:");
   scanf("%d",&n1);
   res=fact(n1);
   printf("The factorial is=%d",res);
return 0;
}
int fact(int n1)
{
   int fact=1;
   for(int i=1;i<=n1;i++)
        fact=fact*i;
        
       return fact;
}

