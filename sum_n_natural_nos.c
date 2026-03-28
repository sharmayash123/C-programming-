#include <stdio.h>

// Sum of first N natural numbers using for loop

int main() 
{      
    int n, i, sum = 0;
    // input
    printf("Enter value of N: ");
    scanf("%d", &n);

    // Iteration using for loop and adding each value in sum
    for (i = 1; i <= n; i++) {
        sum += i;
    }

    // Output
    printf("Sum = %d\n", sum);

    return 0;
}