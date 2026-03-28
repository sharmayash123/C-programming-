#include <stdio.h>

// Find sum of digits of a number

int main() 
{
    int num, s = 0, rem;
     

    printf("Enter a number: ");
    scanf("%d", &num);
    int t = num;          // Assigning input number to t for its later use

    // Handle negative numbers, make them positive
    if (num < 0)
        num = -num;

    while (num != 0) {
        rem = num % 10;        // Get last digit
        s += rem;              // Add each digit to sum
        num /= 10;             // Remove last digit
    }

    printf("Sum of digits in %d = %d\n",t , s);

    return 0;
}