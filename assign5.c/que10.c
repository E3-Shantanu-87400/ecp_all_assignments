#include<stdio.h>
#include<stdlib.h>

int linear_search(int *arr,int a);
int main()
{
	int a;
	printf("Enter the size :");
	scanf("%d",&a);
	int *arr = (int *)malloc(a*sizeof(int));
	printf("Enter the elements :");
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}

	linear_search(arr,a);
	return 0;
}

int linear_search(int *arr,int a)
{
	int key;
	printf("Enter the key :");
	scanf("%d",&key);
	for(int i=0;i<a;i++)
	{
		if(arr[i] == key)
		{
			printf("%d is found st locstion %d \n",key,i);
		}
		else
		{
			return NULL;
		}
	}
}
