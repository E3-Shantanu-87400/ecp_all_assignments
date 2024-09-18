#include<stdio.h>
int main()
{
	 int i, j, product;
	 for(i=3;i<=6;i++)
	 {
		  for(j=1;j<=10;j++)
		  {
			   product = i*j;
                           printf("\n");
			   printf("%d x %d = %d\t", i, j, product);
		  }
		  printf("\n");
	 }
	
	 return 0;
}

