#include<stdio.h>
// Finding largest of three numbers 
int main()
{
    float a, b, c;
    printf("Enter three numbers : ");
    scanf("%f %f %f", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%.2f is largest", a);
    }
    else if (b > c && b > a)
    {
        printf("%.2f is largest", b);
    }
    else if (c > a && c > b)
    {
        printf("%.2f is largest", c);
    }
    else if (a == b && a == c)
    {
        printf("Entered numbers are equal");
    }

    return 0;
}