#include <stdio.h>
#include <string.h>
#include <ctype.h>


/*
Program: Palindrome Using Stack
Description: Checks whether a string is a palindrome using a stack.

Operations: Push, Pop, String Comparison, Lowercase Conversion

Time Complexity: O(n)
Space Complexity: O(n)
*/

#define max 100

int top = -1;
char stack[max];

void push(char ch)
{
    stack[++top] = ch;
}

void display()
{   int temp = top;
    while(temp != -1)
    {
        printf("%c  ", stack[temp]);
        temp--;
    }
}

void pop()
{
    top--;
}

int main()
{
    char str[100];

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

// Remove the newline added by fgets()
    str[strcspn(str, "\n")] = '\0';
    printf("Entered expression is: %s\n", str);
    
    int len = strlen(str);

// Convert string to lowercase 
    for(int i = 0; i < len; i++)
    {
        str[i] = tolower(str[i]);
    }
    
// Push all characters into stack
    for(int i = 0; i < len; i++)
    {
        push(str[i]);
    }
    
    int flag = 0;

// Compare string with stack and pop if same characters, else break
    for(int i = 0; i < len; i++)
    {
        if(top != -1 &&  str[i] == stack[top])
        {
            pop();
        }
        else    
        {
            flag = 1;
            break;
        }
    }

   
    if(flag)
    {
        printf("\nNon palindrome");
    }
    else    
    {
        printf("\nPalindrome");
    }

    return 0;
    
}
