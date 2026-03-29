#include <stdio.h>

// Simple calculator using switch case

int main() {
    float a, b;
    char op;
// Input operation
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
// Input operands
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch(op) {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;                             // Break is necessary otherwise all switches become open after entered operation 

        case '-':
            printf("Result = %.2f\n", a - b);
            break;

        case '*':
            printf("Result = %.2f\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f\n", a / b);
            else
                printf("Error! Division by zero\n");
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
