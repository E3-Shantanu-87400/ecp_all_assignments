#include<stdio.h>
int accept_num(void);
int cal(int *ptr1,int *ptr2,int *ppro);
int main()
{

  int n1,n2,ppro;
  n1=accept_num();
  n2=accept_num();
  int sum=cal(&n1,&n2,&ppro);
   printf("addition is=%d\n",sum);
   printf("product is=%d\n",ppro);
return 0;
}
int cal(int *ptr1,int*ptr2,int *ppro)
{
    *ppro=(*ptr1)*(*ptr2);
    return *ptr1+*ptr2;
}
int accept_num(void)
{
  int a;
 printf("Enter the number:");
 scanf("%d",&a);
 return a;
}
