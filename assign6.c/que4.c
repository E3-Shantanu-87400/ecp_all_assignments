#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void remove_occurrences(char *str1, char *str2);

int main() {
    char str1[100];
    char str2[100];

    printf("Enter first string (characters to remove): ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string (from which to remove characters): ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    remove_occurrences(str1, str2);

    printf("The string after removing occurrences is: %s\n", str2);

    return 0;
}

void remove_occurrences(char *str1, char *str2) {
    int i, j;
    char *dst = str2;
    char *src = str2;

    while (*src) {
        int found = 0;
        for (i = 0; str1[i]; i++) {
            if (*src == str1[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

