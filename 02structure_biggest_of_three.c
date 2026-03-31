#include <stdio.h>

/*
    Program: Find Largest of three numbers using Structure

    Description:
    This program uses a structure to store three numbers
    and determines the largest among them.

    Concepts Used:
    - Structures
    - Conditional statements (if-else)
*/

int main()
{
    // Defining structure
    struct numbers
    {
        float a, b, c;   
    };

    // Declaring structure variable
    struct numbers num;

    // Taking input
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num.a, &num.b, &num.c);

    // Finding largest number
    if (num.a >= num.b && num.a >= num.c)
    {
        printf("Largest number is: %.2f", num.a);
    }
    else if (num.b >= num.a && num.b >= num.c)
    {
        printf("Largest number is: %.2f", num.b);
    }
    else
    {
        printf("Largest number is: %.2f", num.c);
    }

    return 0;
}
