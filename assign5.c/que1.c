#include<stdio.h>
void accept(int *arr,int len);
void total(int *arr,int len)
{
  float total=0;
  for(int i=0;i<len;i++)
{
   total=total+arr[i];
}
   float avg=total/3;
   printf("\ntotal is = %f\n",total);
   printf("\naverage is = %f\n",avg);
}
void print(int *arr,int len)
{
printf("Marks are:");
for(int i=0;i<len;i++)
printf("%4d",arr[i]);

}
int main()
{  
int arr[5];
accept(arr,5);
print(arr,5);
total(arr,5);
return 0;
}
void accept(int *arr,int len)
{
  printf("enter marks:");
  for(int i=0;i<len;i++)
    scanf("%d",&arr[i]);
}
