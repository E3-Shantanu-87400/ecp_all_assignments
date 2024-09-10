/*Write a program to determine the ranges of char, short, int, and long variables, both signed and
  unsigned, by printing appropriate values from standard headers.
  Do not use spaces to align table columns.*/
#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
	printf("Range of signed integer:%d to %d\n",INT_MIN,INT_MAX);
	printf("Range of unsigned integer:0 to %u\n",UINT_MAX);
	printf("Range of signed charater:%c to %c\n",CHAR_MIN,CHAR_MAX);
	printf("Range of unsigned character:0 to %u\n",UCHAR_MAX);
	printf("Range of signed short:%hd to %hd\n",SHRT_MIN,SHRT_MAX);
	printf("Range of unsigned short:0 to %hu\n",USHRT_MAX);
	printf("Range of signed long:%ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("Range of unsigned long:0 to %lu\n",ULONG_MAX);
	printf("Range of signed Double:%f to %f\n",FLT_MIN,FLT_MAX);
	return 0;
}
