#include<stdio.h>
#include<stdlib.h>
#include"header.h"
void max_arr(int *arr,int len)
{
int key=arr[0];
for(int i=1;i<=len;i++)
{
 if(arr[i]>key)
     key=arr[i];
}
printf("\nmax element is=%d",key);
}
int main()
{
int len;
printf("Enter the length:");
scanf("%d",&len);
int *arr=(int *)malloc(len*sizeof(int));
accept_arr(arr,len);
print_arr(arr,len);
printf("Max is:");
max_arr(arr,len);

return 0;
}


