#include <stdio.h>

// Print multiplication table of a input number

int main() {
    int n, i;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Printing table on each iteration using for loop
    printf("Table of %d is\n ", n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}