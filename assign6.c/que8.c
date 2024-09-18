#include <stdio.h>
#include <string.h>

void number_to_words(int num, char* result) {
    const char* ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    const char* teens[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    const char* tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    const char* thousands[] = {"", "Thousand", "Million"};

    if (num == 0) {
        strcpy(result, "Zero");
        return;
    }

    result[0] = '\0';

    int index = 0;
    int chunk;
    char buffer[256];

    while (num > 0) {
        chunk = num % 1000;
        if (chunk != 0) {
            snprintf(buffer, sizeof(buffer), "%s", result);
            result[0] = '\0';

            if (chunk / 100 > 0) {
                strcat(result, ones[chunk / 100]);
                strcat(result, " Hundred ");
            }
            chunk %= 100;

            if (chunk / 10 == 1) {
                strcat(result, teens[chunk % 10]);
            } else {
                if (chunk / 10 > 0) {
                    strcat(result, tens[chunk / 10]);
                    strcat(result, " ");
                }
                strcat(result, ones[chunk % 10]);
            }

            strcat(result, " ");
            strcat(result, thousands[index]);
            strcat(result, " ");
        }
        num /= 1000;
        index++;
    }

    size_t len = strlen(result);
    if (len > 0 && result[len - 1] == ' ') {
        result[len - 1] = '\0';
    }
}

int main() {
    int num;
    char result[256];

    printf("Enter a number: ");
    scanf("%d", &num);

    number_to_words(num, result);
    printf("The number in words is: %s\n", result);

    return 0;
}

