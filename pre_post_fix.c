#include <stdio.h>

// Demonstrate prefix and postfix increment & decrement

int main() 
{
    int a = 5, b = 5, c = 5, d = 5;

    // Prefix Increment
    printf("Prefix Increment:\n");
    printf("Initial value of a = %d\n", a);
    printf("++a = %d\n", ++a);   // increment first, then use
    printf("Value of a after operation = %d\n\n", a);

    // Postfix Increment
    printf("Postfix Increment:\n");
    printf("Initial value of b = %d\n", b);
    printf("b++ = %d\n", b++);   // use first, then increment
    printf("Value of b after operation = %d\n\n", b);

    // Prefix Decrement
    printf("Prefix Decrement:\n");
    printf("Initial value of c = %d\n", c);
    printf("--c = %d\n", --c);   // decrement first, then use
    printf("Value of c after operation = %d\n\n", c);

    // Postfix Decrement
    printf("Postfix Decrement:\n");
    printf("Initial value of d = %d\n", d);
    printf("d-- = %d\n", d--);   // use first, then decrement
    printf("Value of d after operation = %d\n", d);

    return 0;
}
