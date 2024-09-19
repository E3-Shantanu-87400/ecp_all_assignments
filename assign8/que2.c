#include<stdio.h>

void Accept_Info();
void Display_Info();

struct student{

	int rollnum;
	char name[20];
	float marks;
}S;

int main()
{
	Accept_Info();

	Display_Info();

	return 0;
}

void Accept_Info(){

	printf("Enter student information :\n");

	printf("Enter student roll number:\n");
	scanf("%d",&S.rollnum);
	
	printf("Enter student name :\n");
	scanf("%*c%[^\n]",S.name);
	
	printf("Enter student marks :\n");
	scanf("%*c%f",&S.marks);
}

void Display_Info(){

	printf("Student Information :\n");

	printf(" Roll Number : %d\n", S.rollnum);
	printf(" Name        : %s\n", S.name);
	printf(" Marks       : %2f\n", S.marks);
}
