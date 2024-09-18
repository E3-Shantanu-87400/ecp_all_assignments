#include<stdio.h>
#include<stdlib.h>

int binarys(int *arr,int a);
int main()
{
	int a;
	printf("Enter a no :");
	scanf("%d",&a);
	int *arr = (int*)malloc(a*sizeof(int));
	printf("Enter the array elements :");
	for(int i=0;i<=a;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	binarys(arr,a);
	return 0;
}

int binarys(int *arr,int a)
{
	int middle = (arr[0]+arr[a])/2;
	int key = arr[0];
	while(arr[0]<=arr[a])
	{
		if(arr[middle] < key)
		{
			arr[0] = middle + 1;
		}
		else if(arr[middle] == key)
		{
			printf("%d is found at index %d\n",arr[middle],key);
		}
		else
		{
			printf("Not found..\n");
			return -1;
		}
	}
}
