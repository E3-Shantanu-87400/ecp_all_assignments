//4. Write a program to find factorial of given number.
#include<stdio.h>
int main()
{
  int num=5;
  int fact=1;
  for(int i=1;i<=num;i++)
     {
        fact=fact*i;
}
printf("5 * 4 * 3 * 2 * 1 = %d\n",fact);
     


return 0;
}
