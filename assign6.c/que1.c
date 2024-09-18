#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void len(const char *str1, const char *str2) {
    int length;
    length = strlen(str1);
    printf("The length of the first string is %d\n", length);
    length = strlen(str2);
    printf("The length of the second string is %d\n", length);
}

void copy_str(char *str1, const char *str2) {
    printf("The string before copy is: %s\n", str1);
    strcpy(str1, str2);
    printf("The string after copy is: %s\n", str1);
}

void cat(char *str1, const char *str2) {
    strcat(str1, str2);
    printf("The combined string is: %s\n", str1);
}

void amp(const char *str1, const char *str2) {
    int result = strcmp(str1, str2);
    if (result > 0) {
        printf("str1 is greater than str2\n");
    } else if (result < 0) {
        printf("str1 is less than str2\n");
    } else {
        printf("str1 is equal to str2\n");
    }
}

void com(const char *str1, const char *str2) {
    int result = strcasecmp(str1, str2);
    if (result > 0) {
        printf("str1 is greater\n");
    } else if (result < 0) {
        printf("str2 is greater\n");
    } else {
        printf("str1 is equal to str2\n");
    }
}

void rev(const char *str1, const char *str2) {
    printf("The reverse of str1 is: ");
    for (int i = strlen(str1) - 1; i >= 0; i--) {
        printf("%c", str1[i]);
    }
    printf("\nThe reverse of str2 is: ");
    for (int i = strlen(str2) - 1; i >= 0; i--) {
        printf("%c", str2[i]);
    }
    printf("\n");
}

void character(const char *str1) {
    char *ch = strchr(str1, 'a');
    if (ch != NULL) {
        printf("Character 'a' found at position %ld\n", ch - str1);
    } else {
        printf("Character 'a' not found\n");
    }
}

void strings(const char *str1) {
    char *sub = strstr(str1, "mauli");
    if (sub != NULL) {
        printf("Substring 'mauli' found at position %ld\n", sub - str1);
    } else {
        printf("Substring 'mauli' not found\n");
    }
}

void cpyn1(char *str1, const char *str2) {
    printf("Before copy str1 is: %s\n", str1);
    strncpy(str1, str2, strlen(str2));
    str1[strlen(str2)] = '\0';
    printf("After copy str1 is: %s\n", str1);
}

void catn1(char *str1, const char *str2) {
    printf("Before concatenation str1 is: %s\n", str1);
    strncat(str1, str2, strlen(str2));
    printf("After concatenation str1 is: %s\n", str1);
}

void campn1(const char *str1, const char *str2) {
    int result = strncmp(str1, str2, strlen(str1) > strlen(str2) ? strlen(str2) : strlen(str1));
    if (result > 0) {
        printf("str1 is greater\n");
    } else if (result < 0) {
        printf("str2 is greater\n");
    } else {
        printf("str1 is equal to str2\n");
    }
}

void tokn(char *str1) {
    char *token = strtok(str1, " ");
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, " ");
    }
}

void str_next1(char *str1, char *str2) {
    enum { exit, cpyn, catn, cmpn, tok } ch;
    do {
        printf("0.EXIT\n1.COPY (n)\n2.CONCATENATE (n)\n3.COMPARE (n)\n4.TOKEN (str)\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case exit:
                return;
            case cpyn:
                cpyn1(str1, str2);
                break;
            case catn:
                catn1(str1, str2);
                break;
            case cmpn:
                campn1(str1, str2);
                break;
            case tok:
                tokn(str1);
                break;
            default:
                printf("Invalid choice...\n");
                break;
        }
    } while (ch != exit);
}

void str_next(const char *str1, const char *str2) {
    enum { exit, compare, reverse, chr, substr, str3 } s;
    do {
        printf("0.EXIT\n1.COMPARE\n2.REVERSE STR\n3.STRCHR\n4.STRSTR\n5.str_next1\n");
        printf("Enter your choice: ");
        scanf("%d", &s);

        switch (s) {
            case exit:
                return;
            case compare:
                com(str1, str2);
                break;
            case reverse:
                rev(str1, str2);
                break;
            case chr:
                character(str1);
                break;
            case substr:
                strings(str1);
                break;
            case str3:
                str_next1((char*)str1, (char*)str2);
                break;
            default:
                printf("Invalid choice...\n");
                break;
        }
    } while (s != exit);
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf(" %[^\n]s", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);

    enum { exit, length, copy, connect, compare, str_next_menu } ch;
    do {
        printf("0.EXIT\n1.STRLEN\n2.STRCPY\n3.STRCAT\n4.STRCMP\n5.STR_NEXT\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case exit:
                return 0;
            case length:
                len(str1, str2);
                break;
            case copy:
                copy_str(str1, str2);
                break;
            case connect:
                cat(str1, str2);
                break;
            case compare:
                amp(str1, str2);
                break;
            case str_next_menu:
                str_next(str1, str2);
                break;
            default:
                printf("Invalid choice...\n");
                break;
        }
    } while (ch != exit);

    return 0;
}

