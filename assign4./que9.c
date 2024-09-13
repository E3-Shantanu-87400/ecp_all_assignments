//Write a function to indicate whether given number is prime or not. Write another function to print prime numbers in the given range.
#include<stdio.h>
int prime_no(int);
int main()
{
  int num;
  printf("Enter the number:");
  scanf("%d",&num);
  int x=prime_no(num);
  if(x==0)
    printf("prime no\n");
  else
    printf("Not prime\n");
return 0; 


}
int prime_no(int n)
{
   int flag=0;
  int i=2;
   while(i<=n/2)
{
   if(n%i==0)
         flag=1;
         return flag;
i++;


}
return flag;
}
