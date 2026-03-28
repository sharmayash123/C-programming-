#include <stdio.h>

// Reverse a number

int main() 
{
    int num, rev = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;  // Store original number

    while (num != 0) 
    {
        rem = num % 10;          // Get last digit using modulo operator
        rev = rev * 10 + rem;    // Build reversed number
        num /= 10;               // Remove last digit by int division by 10
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}