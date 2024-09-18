#include<stdio.h>
#include<stdlib.h>

void sort_ar(int *arr,int a);
int main()
{
	int a;
	printf("Enter the size :");
	scanf("%d",&a);
	int *arr = (int *)malloc(a*sizeof(int));

	printf("enter the elements :");
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	sort_ar(arr,a);
	printf("\n");
	return 0;
}

void sort_ar(int *arr,int a)
{
	for(int i=0;i<a;i++)
	{
		for(int j=i+1;j<a;j++)
		{
			if(arr[i]>arr[j])
				{
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
		}
	}
	printf("The sorted array is :");
	for(int i=0;i<a;i++)
	{
		printf("%d ",arr[i]);
	}
}
		
