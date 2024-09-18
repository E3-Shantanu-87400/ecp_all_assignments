#include<stdio.h>
int main()
{
	 int mul;
	 for(int i=1;i<=10;i++)
	 {
		  for(int j=1;j<=10;j++)
		  {
			   mul= i*j;
printf("\n");			   
printf("%d x %d = %d\t", i, j, mul);
		  }
		  printf("\n");
	 }
	 return 0;
}

