#include<stdio.h>
void accept_arr(int *arr,int len)
{
  printf("Enter array elements:");
  for(int i=0;i<len;i++)
   scanf("%d",&arr[i]);
}
void print_arr(int *arr,int len)
{
  printf("\nThe array is:");
  for(int i=0;i<len;i++)
   printf("%-4d",arr[i]);
  
}
//printf("the reverse of array is:");
void rev_arr(int *arr,int len)
{
   for(int i=(len-1);i>=0;i--)
    printf("%4d",arr[i]);
}
