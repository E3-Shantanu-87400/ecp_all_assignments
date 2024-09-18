#include <stdio.h>
#include<string.h>
int my_atoi(const char* str) {
    int result = 0;
    int sign = 1;

    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0;
        }
        result = result * 10 + (*str - '0');
        str++;
    }

    return sign * result;
}

int main() {
    char str[100];
    
    printf("Enter a string of digits: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int number = my_atoi(str);
    printf("The numeric equivalent is: %d\n", number);

    return 0;
}

