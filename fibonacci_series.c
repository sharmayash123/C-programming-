#include <stdio.h>

// Print Fibonacci series up to N terms

int main() {
    int n, i;
    int a = 0, b = 1, next;                  // Declaring first and second terms of fibonacci series as a and b

// Input
    printf("Enter number of terms: ");
    scanf("%d", &n);

// Checking for invalid input's
    if (n <= 0) {
        printf("Invalid input\n");
    }

    else {
        printf("Fibonacci Series: ");

    // Logic : Value of each terms becomes sum of last 2 terms
    printf("Fibonacci series : ");
        for (i = 1; i <= n; i++) {
            printf("%d  ", a);
            next = a + b;
            a = b;
            b = next;
        }
        
    }

    return 0;
}