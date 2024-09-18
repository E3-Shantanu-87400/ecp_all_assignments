#include<stdio.h>
#include"header.h"
#include<stdlib.h>
int main()
{
  int len;
  printf("Enter the length:");
  scanf("%d",&len);
  int *arr=(int*)malloc(len*sizeof(int));
  accept_arr(arr,len);
  print_arr(arr,len);
 printf("\nThe rev of array is:");
  rev_arr(arr,len);
return 0;
}
