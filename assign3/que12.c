//Write a program to accept integer values of base and index and calculate power of base to index.
#include<stdio.h>
int main()
{
   int base,ind,i,res=1;
   printf("Enter the base and index:");
   scanf("%d%d",&base,&ind);
   printf("The power is:");
   for(i=1;i<=ind;i++)
     res=res*base;
   printf("%d",res);



return 0;
}
