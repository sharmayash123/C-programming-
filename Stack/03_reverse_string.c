#include <stdio.h>
#include <string.h>

/*
Reverse a String Using Stack

The program takes a string as input, pushes each character
onto the stack, and prints the characters in reverse order.

Operations:
Push, Reverse String
*/

#define max 100

int top = -1;
char stack[max];

void push(char ch)
{
    stack[++top] = ch;
}

void display()
{
    while (top != -1)
    {
        printf("%c", stack[top]);
        top--;
    }
}

int main()
{
    char str[100];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline added by fgets()
    str[strcspn(str, "\n")] = '\0';

    printf("Entered string is: %s\n", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }

    printf("Reverse string: ");
    display();

    return 0;
}
