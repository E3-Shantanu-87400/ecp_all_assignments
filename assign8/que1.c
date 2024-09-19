#include<stdio.h>

struct student{

	int rollno;
	char name[20];
	float marks;
}S;

int main()
{
	printf("Enter student info.\n");

	printf("Enter student roll number\n");
	scanf("%d",&S.rollno);

	printf("Enter student roll number\n");
	scanf("%[^\n]",&name);
	
	printf("Enter student roll number\n");
	scanf("%f",&S.marks);

	printf("Student Information : \n");
	printf("Roll Number : %d\n Name     : %s\n Marks     : %f\n", S.rollno, S.name, S.marks);

	return 0;
}
