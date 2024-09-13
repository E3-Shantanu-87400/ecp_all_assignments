//5. Write a function to print a given character for a given number of times
#include<stdio.h>
void ch_print(int ,char);
int main()
{
	int num;
	char ch;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("Enter the charater:");
	scanf("%*c%c",&ch);
	ch_print(num,ch);

       printf("\n");
	return 0;
}
void ch_print(int n,char ch)
{
	for(int i=0;i<n;i++)
		printf("%c",ch);
}
