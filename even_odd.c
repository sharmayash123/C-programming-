#include<stdio.h>
int main()
{
    int num;
    printf("Enter a integer : ");
    scanf("%d", &num);

    (num & 1) && printf("Number is odd");
    !(num & 1) && printf("Number is even");

    return 0;
    
}