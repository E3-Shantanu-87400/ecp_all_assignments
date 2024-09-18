#include<stdio.h>
int main()
{
int i;
for(i=2;i<=100;i++)
{
  int n1=i/2;
  if(n1%2==0)
  printf("");
  else
    printf("%d",n1);
}
return 0;
}
