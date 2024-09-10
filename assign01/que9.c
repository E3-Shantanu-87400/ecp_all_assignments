//wap to convert temperature in celsius to fahrenhit and vice versa
#include<stdio.h>
int main()
{
	int temp,temp2;
	float far;
	printf("Enter the temperature in celsius:");
	scanf("%d",&temp);
	far=(float)9*temp/5;
        far=far+32;
	printf("far=%f\n",far);
	printf("Enter the temp in fahrenheit:");
        scanf("%d",&temp2);
	float cel;
	temp2=temp2-32;
	cel=(float)5*temp2/9;
	printf("The temp in celsius is=%f\n",cel);
	return 0;
}
