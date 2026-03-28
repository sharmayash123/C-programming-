// Question:
// Take two numbers as input and print their sum.

#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Taking input from user
    printf("Enter two integers seperated by space : ");
    scanf("%d %d", &num1, &num2);

    // Calculating sum
    sum = num1 + num2;

    // Displaying result
    printf("Sum of %d and %d is %d\n",num1, num2, sum);

    return 0;
}