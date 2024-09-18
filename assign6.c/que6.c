#include <stdio.h>

void convert_to_string(int num);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    convert_to_string(num);

    return 0;
}

void convert_to_string(int num) {
	int ch;
	ch  = num;
    printf("The string representation is: %c\n", ch);
}

