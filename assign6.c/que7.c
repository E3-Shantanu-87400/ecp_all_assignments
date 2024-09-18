#include <stdio.h>

void decimal_to_roman(int num) {
    struct {
        int value;
        const char *numeral;
    } roman_numerals[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };

    for (int i = 0; i < 13; i++) {
        while (num >= roman_numerals[i].value) {
            printf("%s", roman_numerals[i].numeral);
            num -= roman_numerals[i].value;
        }
    }
    printf("\n");
}

int roman_to_decimal(const char *roman) {
    struct {
        char numeral;
        int value;
    } roman_values[] = {
        {'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50},
        {'X', 10}, {'V', 5}, {'I', 1}
    };

    int total = 0;
    while (*roman) {
        char current = *roman;
        char next = *(roman + 1);
        int current_value = 0, next_value = 0;

        for (int i = 0; i < 7; i++) {
            if (roman_values[i].numeral == current) {
                current_value = roman_values[i].value;
            }
            if (roman_values[i].numeral == next) {
                next_value = roman_values[i].value;
            }
        }

        if (current_value < next_value) {
            total += next_value - current_value;
            roman++;
        } else {
            total += current_value;
        }
        roman++;
    }

    return total;
}

int main() {
    int num;
    char roman[50];

    printf("Enter a number: ");
    scanf("%d", &num);
    decimal_to_roman(num);

    printf("Enter a Roman numeral: ");
    scanf("%s", roman);
    printf("The decimal equivalent is: %d\n", roman_to_decimal(roman));

    return 0;
}

