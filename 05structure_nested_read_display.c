#include<stdio.h>
#include<string.h>
/*
    Program: Read and display information of a student

    Description:
    This program uses a nested structure to store information of 
    student and displays it.

    Concepts Used:
    - Structures
    
*/

int main()
{
    // Defining the structure used in the structure below
    struct DOB
    {
        int day;
        int month;
        int year;
    };
    
    //  Defining structure
    struct student
    {
        int roll_no;
        char name[20];
        float fees;
        struct DOB date;
    };
    
    // Declaring structure variable
    struct student stud1;

    // Input
    printf("Enter name : ");
    fgets(stud1.name, 20, stdin);
    printf("Enter roll number : ");
    scanf(" %d", &stud1.roll_no);
    printf("Enter fees : ");
    scanf("%f", &stud1.fees);
    printf("Enter DOB : ");
    scanf("%d %d %d", &stud1.date.day, &stud1.date.month, &stud1.date.year);

    // Output
    printf("\nSTUDENT DETAILS");
    printf("\nName : %s", stud1.name);
    printf("\nRoll number : %d", stud1.roll_no);
    printf("\nFess : %.2f", stud1.fees);
    printf("\nDOB : %d/%d/%d", stud1.date.day, stud1.date.month, stud1.date.year);
    
    return 0;
}