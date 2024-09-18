#include <stdio.h>

size_t my_strlen(const char* str) {
    const char *s = str;
    while (*s) {
        s++;
    }
    return s - str;
}

char* my_strcpy(char *dest, const char *src) {
    char *d = dest;
    while ((*d++ = *src++)) {
        ;
    }
    return dest;
}

char* my_strcat(char *dest, const char *src) {
    char *d = dest;
    while (*d) {
        d++;
    }
    while ((*d++ = *src++)) {
        ;
    }
    return dest;
}

int my_strcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

int my_stricmp(const char *str1, const char *str2) {
    unsigned char c1, c2;
    while (*str1 && *str2) {
        c1 = *str1;
        c2 = *str2;
        if (c1 >= 'A' && c1 <= 'Z') c1 += 32;
        if (c2 >= 'A' && c2 <= 'Z') c2 += 32;
        if (c1 != c2) return c1 - c2;
        str1++;
        str2++;
    }
    return *(unsigned char*)str1 - *(unsigned char*)str2;
}

char* my_strrev(char* str) {
    char *start = str;
    char *end = str;
    char temp;
    while (*end) {
        end++;
    }
    end--;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return str;
}

char* my_strchr(const char *str, int ch) {
    while (*str) {
        if (*str == (char)ch) {
            return (char*)str;
        }
        str++;
    }
    return NULL;
}

char* my_strstr(const char *str, const char *substr) {
    const char *p1 = str;
    const char *p2 = substr;
    const char *p1Adv = p1;
    while (*p1Adv) {
        p1 = p1Adv;
        p2 = substr;
        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }
        if (!*p2) {
            return (char*)p1Adv;
        }
        p1Adv++;
    }
    return NULL;
}

int main() {
    char str1[100], str2[100];
    
    printf("Enter first string: ");
    scanf(" %[^\n]s", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]s", str2);

    printf("Length of first string: %zu\n", my_strlen(str1));
    printf("Copy second string into first string: %s\n", my_strcpy(str1, str2));
    printf("Concatenate second string to first string: %s\n", my_strcat(str1, str2));
    printf("Compare first and second strings: %d\n", my_strcmp(str1, str2));
    printf("Compare first and second strings case-insensitively: %d\n", my_stricmp(str1, str2));
    printf("Reverse first string: %s\n", my_strrev(str1));
    printf("Find character 'a' in first string: %s\n", my_strchr(str1, 'a'));
    printf("Find substring in first string: %s\n", my_strstr(str1, "mauli"));

    return 0;
}

