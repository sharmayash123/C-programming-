#include <stdio.h>
  /*
    Program: Find sum and difference of 2 complex numbers

    Description:
    This program uses a structure to store two complex numbers
    and determines the input operation on them.

    Concepts Used:
    - Structures
    - Switch-case
*/

int main()
{
    // Defining structure
    struct complex
    {
        int real;
        int img;
    };

     // Declaring structure variable's (2 operands and results of operation's)
    struct complex c1, c2, sum, diff;

    // Input complex number's
    printf("Enter real part's of complex nos 1 and 2 : ");
    scanf("%d %d", &c1.real, &c2.real);
    
    printf("Enter imaginary part's of complex nos 1 and 2 : ");
    scanf("%d %d", &c1.img, &c2.img);

    // Input operand
    char operand;
    printf("Enter the operand : ");
    scanf(" %c", &operand);

    switch (operand)
    {
        case '+' : 
            sum.real = c1.real + c2.real;
            sum.img = c1.img + c2.img;
            printf("Result : %d + %di", sum.real, sum.img);
            break;

        case '-' : 
            diff.real = c1.real - c2.real;
            diff.img = c1.img - c2.img;
            if (diff.img < 0)
            {
                printf("Result : %d %di", diff.real, diff.img);
            }
            else    
                printf("Result : %d + %di", diff.real, diff.img);
            break;

        default :
            printf("Enter valid operation");
    } 

    return 0;
}
