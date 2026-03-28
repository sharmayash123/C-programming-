#include <stdio.h>

// Calculate factorial using loop of a input number

int main() 
{
    int n, i;
    long long fact = 1;                      // As factorial of a number can be a big integer

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Dealing with invalid input
    if (n < 0) {
        printf("Factorial not defined for negative numbers\n");
    } 

    // Calculating factorial
    else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
    }
    
    // Output
    printf("Factorial = %lld\n", fact);
    return 0;
}