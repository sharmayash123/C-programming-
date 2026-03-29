#include <stdio.h>

// Check whether a number is positive, negative, or zero           

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num > 0)
        printf("Number is positive\n");
    else if (num < 0)
        printf("Number is negative\n");
    else
        printf("Number is zero\n");

    return 0;
}
