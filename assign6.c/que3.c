#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void occur(char *str1, char *str2, char ch);

int main() {
    char str1[100];
    char str2[100];
    char ch;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("Enter the character to remove: ");
    scanf(" %c", &ch);

    occur(str1, str2, ch);

    return 0;
}

void occur(char *str1, char *str2, char ch) {
    char *src = str1;
    char *dst = str1;
    while (*src) {
        if (*src != ch) {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
    printf("The string after removing occurrences is: %s\n", str1);
}

