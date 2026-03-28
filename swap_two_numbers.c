#include<stdio.h>
int main()
{
    int a, b, temp;          // declaring 2 integers and a temperory variable

    // Input 2 integers
    printf("\nEnter two integers : ");
    scanf("%d %d", &a, &b);
    printf("\nBefore swapping a = %d and b = %d", a, b);
    
    // Swapping
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping a = %d and b = %d", a, b);

    return 0;
}