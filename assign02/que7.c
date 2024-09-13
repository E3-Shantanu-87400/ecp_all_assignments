/*Write a program to display number of days in the given year. Check condition for leap year. A year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap years.
  a. Without using logical operators
  b. Using logical operators
  c. Conditional operator*/
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	/*if(year%400==0)
         {
            printf("leap year\n");
         }
       else if(year%100==0)
        {
           printf("Not leap year\n");
	}
       else if(year%4==0)
	{
	  printf("Leap year\n");
	}
	else
	{
	 printf("Not leap year\n");
	}*/
        //using logical operator
        /*if((year%400==0 && year%4==0)||(year%100==0))
            printf("leap year\n");
        else
	    printf("NOt leap year");*/
	//using conditional operator
         ((year%400==0 && year%4==0)||(year%100==0))?printf("leap year\n"):printf("Not leap year\n"); 
	return 0;
}
