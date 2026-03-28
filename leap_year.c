#include <stdio.h>

// Check whether a year is a leap year

int main() {
    int year;

    // Input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year logic:
    // 1. Divisible by 4 AND not divisible by 100
    // OR
    // 2. Divisible by 400

    // condition checking
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a leap year\n", year);
    else
        printf("%d is not a leap year\n", year);

    return 0;
}