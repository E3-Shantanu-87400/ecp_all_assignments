#include<stdio.h>
#include<stdlib.h>

int linear(int *arr,int a);
int main()
{
	int a;
	printf("Enter a no :");
	scanf("%d",&a);
	int *arr = (int*) malloc(a*sizeof(int));

	printf("Enter the elements :");
	for(int i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
	}

	linear(arr,a);
	return 0;
}

int linear(int *arr,int a)
{
	int key;
	printf("Enter a no to search :");
	scanf("%d",&key);

	for(int i=0;i<a;i++)
	{
		if(arr[i]==key)
		{
			printf("The %d is found at index %d\n",key,i);
		}
		else
		{
			return -1;
		}
	}
	printf("\n");
}
