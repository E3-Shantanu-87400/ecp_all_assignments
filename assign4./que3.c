#include<stdio.h>
int add(int n1,int n2);
int sub(int n1,int n2);
int mul(int n1,int n2);
int Div(int n1,int n2);
int accept_num(void);
int main()

{
	int n1,n2,res;
       //	enum cal{ADD,SUB,MUL,DIV}ch;
        int ch;
	printf("1.ADD\n2.SUB\n3.MUL\n4.DIV\n5.EXIT\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	n1=accept_num();
	n2=accept_num();
	switch(ch)
	{
		case 1: res=add(n1,n2);

			break;
		case 2:res=sub(n1,n2);

		       break;
		case 3:res=mul(n1,n2);

		       break;
		case 4:if(n2!=0)
		       {
			       res=Div(n1,n2);
			       printf("The result is=%d",res);
		       }
		       

		       break;
                case 5:printf("Thank You\n");
			goto END;
			break; 
	}
	printf("The result is=%d",res);
Here:
END:

	return 0;
}
int add(int n1,int n2)
{
	int res=n1+n2;
	return res;
}
int accept_num(void)
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	return a;
}
int sub(int n1,int n2)
{
	int res=n1-n2;
	return res;
}
int mul(int n1,int n2)
{
	int res=n1*n2;
	return res;
}
int Div(int n1,int n2)
{
	int res=n1/n2;
	return res;
}
