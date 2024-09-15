/*Write a program to display number of days in the given month and year using switch case
  statement.*/
#include<stdio.h>
int main()
{
	int num,year;
	int ch;


//	while(ch!=0)
//	{
		//printf("0.Exit\n");
		printf("1.Enter year:");
                scanf("%d",&year);
		printf("2.Enter num:");
                scanf("%d",&num);
		printf("enter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1://scanf("%d",&year);
			       if(year%4==0)
				       printf("This year has 366 days\n");
			       break;
			case 2://scanf("%d",&num);
			       if(num==2)
				{
			        printf("This month has 28/29 days\n");
                                goto end;
				}
			       (num==1||num==3||num==5||num==7||num==8||num==10||num==12)?printf("This month has 31 days\n"):printf("This month has 30 days\n");
			       break;




		}






	

         end:
	return 0;
}

