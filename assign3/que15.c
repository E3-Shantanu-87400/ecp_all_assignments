/*Modify the menu driven program for four function calculator. Add a menu item to choose
  option exit. The program continues till user chooses option exit.*/
//Write a program to crate four function calculator. Four functions are +, - , *, /
#include<stdio.h>
int main()
{
   int ch;
   int n1,n2,res;
   printf("Enter the num:");
   scanf("%d%d",&n1,&n2);
do
{
   printf("0.Exit\n");
   printf("1.Add\n");
   printf("2.Sub\n");
   printf("3.Mul\n");
   printf("4.Div\n");
   printf("Enter the choice:");
   scanf("%d",&ch);
switch(ch)
{
   case 1:
            res=n1+n2;
            printf("%d+%d=%d\n",n1,n2,res);
	    break;
   case 2:
            res=n1-n2;
            printf("%d-%d=%d\n",n1,n2,res);
	    break;
   case 3:
            res=n1*n2;
            printf("%d*%d=%d\n",n1,n2,res);
	    break;
   case 4:
            res=n1/n2;
            printf("%d/%d=%d\n",n1,n2,res);
	    break;
  default :printf("Invalid choice\n");
    


}
}while(ch!=0);


return 0;
}
