//Write a program to display day of week from given date (day, month and year).
#include<stdio.h>
int main()
{
   int day,month,year;
   int dayofweek;
   printf("Enter the day/month/year:");
   scanf("%d/%d/%d",&day,&month,&year);
  if(month<3)
{
   month=month+12;
   year--;
}
dayofweek=(day+(13*(month+1)/5)+(year%100)+((year%100)/4)+((year/100)/4)+5*(year/100))%7;
switch(dayofweek)
{
  case 1:printf("Sunday\n");
         break;
  case 2:printf("monday\n");
         break;
  case 3:printf("Tuesday\n");
         break;
  case 4:printf("Wedesday\n");
         break;
  case 5:printf("Thursday\n");
         break;
  case 6:printf("Friday\n");
         break;
  case 0:printf("Saturday\n");
         break;



}





return 0;
}
 
