#include<stdio.h>
int b;
int main()
{
   int n=9361,res,rem,c,d;
   printf("Enter the 4digit number=%d\n",n);
   res=n/1000;
   res=res*1000;
   printf("%d",res);
   rem=n%1000;
   res=rem/100;
   b=res*100;
   printf(" %d",b);
   c=rem%100;
   res=c/10;
   rem=res*10;
   printf(" %d",rem);
   res=c%10;
   printf(" %d",res);  
   d=n%1000;
  int  e=d%100;
  int  f=e%10;
   printf("rev no is=%d %d %d",f,e,d);
   
   
     
return 0;
}
