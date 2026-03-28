#include <stdio.h>

// Count number of digits in a number

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle 0 separately
    if (num == 0) {
        count = 1;
    } 
    
    else {
        // Convert negative to positive
        if (num < 0)
            num = -num;

        while (num != 0) {
            num /= 10;  // Remove last digit
            count++;    // Increasing count after iteration 
        }
    }

    printf("Number of digits in input number are = %d\n", count);

    return 0;
}