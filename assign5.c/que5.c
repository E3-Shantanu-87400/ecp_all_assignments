#include<stdio.h>
#include<stdlib.h>
#include"header.h"
void max_arr(int *arr,int len)
{
   int max=arr[0];
   for(int i=1;i<=len;i++)
       {
         if(arr[i]>max)
            max=arr[i];
         }
printf("\nmax is=%d",max);
}
void min_arr(int *arr,int len)
{
   int min=arr[0];
   for(int i=1;i<=len;i++)
       {
         if(arr[i]<min)
            min=arr[i];
         }
printf("minimun is=%d",min);
}
int main()
{
int len;
printf("Enter the length:");
scanf("%d",&len);
int *arr=(int*)malloc(len*sizeof(int));
accept_arr(arr,len);
print_arr(arr,len);
max_arr(arr,len);
min_arr(arr,len);
return 0;
}

