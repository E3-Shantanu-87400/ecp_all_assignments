#include<stdio.h>
int fact(int);
int main() {

    int x;
    printf("Enter A Number To Find Factorial: ");
    scanf("%d",&x);
    printf("The Factorial of %d = %d", x, fact(x));
    return 0;
}

int fact(int x) 
{
    if (x>=1)
        return x*fact(x-1);
    else
        return 1;
}
