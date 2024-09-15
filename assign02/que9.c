/*Write a program to display number of days in the given month and year using
  a. Using If else ladder.
  b. Using logical operators.*/
#include<stdio.h>
int main()
{
	int month;
	printf("Enter the month:");
	scanf("%d",&month);
//using if else ladder
	if(month==2)
	{ 
         printf("Th emonth has 29/28 days\n");
}
else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
{
 printf("The month has 31 days\n");

}
else
printf("the month has 30 days\n");
//using logical operator.
if(month==2)
  {
    printf("This month has 28/29 days\n");
    goto END;
}
(month==1||month==3||month==5||month==7||month==8||month==10||month==12)?printf("This month has 31 days\n"):printf("This month has 30 days\n");


	return 0;
         END:
}
