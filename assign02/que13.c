//Write a program to crate four function calculator. Four functions are +, - , *, /
#include<stdio.h>
int main()
{
   int n1,n2,res;
   char ch;
   go:
   printf("Enter the 1st number:");
   scanf("%d",&n1);
   printf("Enter the choice:");
   scanf("%*c%c",&ch);
   printf("Entet the 2nd number:");
   scanf("%d",&n2);
switch(ch)
{
   case '+':
            res=n1+n2;
            printf("%d+%d=%d\n",n1,n2,res);
	    break;
   case '-':
            res=n1-n2;
            printf("%d-%d=%d\n",n1,n2,res);
	    break;
   case '*':
            res=n1*n2;
            printf("%d*%d=%d\n",n1,n2,res);
	    break;
   case '/':
            res=n1/n2;
            printf("%d/%d=%d\n",n1,n2,res);
	    break;
  default :printf("Invalid choice\n");
    


}
goto go;


return 0;
}
