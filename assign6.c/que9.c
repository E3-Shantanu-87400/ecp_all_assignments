#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replace_substring(char *str, const char *key, const char *replacement);

int main() {
    char str[1000];
    char key[100];
    char replacement[100];

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    printf("Enter the substring to replace: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';

    printf("Enter the replacement substring: ");
    fgets(replacement, sizeof(replacement), stdin);
    replacement[strcspn(replacement, "\n")] = '\0';

    replace_substring(str, key, replacement);

    return 0;
}

void replace_substring(char *str, const char *key, const char *replacement) {
    char buffer[1000];
    char *p;
    size_t key_len = strlen(key);
    size_t replacement_len = strlen(replacement);
    
    if (key_len == 0) {
        printf("The key substring cannot be empty.\n");
        return;
    }

    buffer[0] = '\0';

    while ((p = strstr(str, key)) != NULL) {
        strncat(buffer, str, p - str);
        strcat(buffer, replacement);
        str = p + key_len;
    }
    strcat(buffer, str);

    strcpy(str, buffer);
    printf("The string after replacement is: %s\n", str);
}

