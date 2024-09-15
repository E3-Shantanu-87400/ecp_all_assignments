/*Write a program to accept Employee Id , Department No, Designation from user and display
output with reference to following tables*/
#include<stdio.h>
int main()
{
  int empid;
  int deptno;
  printf("Enter the empid:");
  scanf("%d",&empid);
  printf("Enter the deptno:");
  scanf("%d",&deptno);
  char code;
  printf("Enter the code:");
  scanf("%*c%c",&code);
  
  switch(code)
  {
      case 'M':printf("employee id %d is working as Manager\n",empid);
		break;
      case 'S':printf("employee id %d is working as Supervisor\n",empid);
		break;
      case 's':printf("employee id %d is working as security officer\n",empid);
		break;
      case 'c':printf("employee id %d is working as clerk\n",empid);
		break;





}


return 0;
}
