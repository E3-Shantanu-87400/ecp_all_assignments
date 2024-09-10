// Write a program to calculate Area and Perimeter of Triangle for given length of three sides of traingle.
#include<stdio.h>
#include<math.h>
int main()
{
	float peri,a,b,c,side,area;
	printf("Enter value a,b,c:");
	scanf("%f %f %f",&a,&b,&c);
	peri=a+b+c;
	printf("The perimeter is=%f\n",peri);
	side=peri/2;
        area=sqrt(side*(side-a)*(side-b)*(side-c));
	printf("The area is=%f\n",area);
	return 0;
}

