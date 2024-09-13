//Write function to check whether given year is leap or not. Write another function to print number of days in given month.
#include<stdio.h>
void Leap_y(int);
void Day_y(int);
int main()
{
   int year;
   printf("Enter the year:");
   scanf("%d",&year);
   Leap_y(year);
   Day_y(year);


return 0;
}
void Leap_y(int n)
{
    if(n%4==0)
	{
	    printf("Leap year\n");
	}
  else if(n%100==0)
{
   printf("The year is not leap\n");
}
   else if(n%400==0)
{

	printf("The year is leap\n");
        
}
else
{
   printf("This year is not leap\n");
}
}
void Day_y(int n)
{

    if(n%4==0)
	{
	    printf("This year is leap year\n");
            printf("the year has 366 days\n");
	}
  else if(n%100==0)
{
   printf("The year is not leap\n");
   printf("the year has 365 days\n");
}
   else if(n%400==0)
{

	printf("The year is leap\n");
   printf("the year has 366 days\n");
        
}
else
{
   printf("This year is not leap\n");
   printf("the year has 365 days\n");
}

}
