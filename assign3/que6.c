//Write a program to accept a number and print all factors excluding the number.
#include<stdio.h>
int main()
{
  int n1;
  printf("Enter the number:");
  scanf("%d",&n1);
 for(int i=1;i<n1;i++)
  {
    int res=n1%i;
    if(res==0)
     printf("%4d",i);
}
 

return 0;
}
