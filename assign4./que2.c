// Write a function to calculate power.
#include<stdio.h>
int pow(int ,int);
int main()
{
  int num,expo,res;
  printf("Enter the number:");
  scanf("%d",&num);
  printf("Enter the expo:");
  scanf("%d",&expo);
  res=pow(num,expo);
printf("%d",res);
return 0;
}
int pow(int n1,int n2)
{
  int res=1;
  for(int i=1;i<=n2;i++)
   res=res*n1;
return res;
}
