#include<stdio.h>
#include<stdlib.h>
#include"header.h"
int main()
{
  int len;
  printf("Enter the length:");
  scanf("%d",&len);
  int *arr =(int*) malloc(len * sizeof(int));
  accept_arr(arr,len);
  print_arr(arr,len);
return 0;
}
