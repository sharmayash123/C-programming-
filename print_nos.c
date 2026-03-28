#include <stdio.h>

// Print numbers from 1 to N using for loop

int main() {
    int n, i;

    // Input
    printf("Enter value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}