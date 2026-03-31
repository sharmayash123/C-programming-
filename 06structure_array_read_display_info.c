#include<stdio.h>
#include<string.h>
/*
    Program: Read and display information of multiple student

    Description:
    This program uses a nested structure to store information of 
    multiple student's and displays it.

    Concepts Used:
    - Structures(nested)
    - Loops
    - Array
    
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
    
    int n;
    printf("Enter number of students in class : ");
    scanf(" %d", &n);

    // Declaring structure array (for n students)
    struct student stud[n];

    // Input using for loop
    for (int i = 0; i < n; i++)
    {   
        printf("Enter details of student %d", i+1);
        printf("\nEnter name : ");
        scanf(" %[^\n]", stud[i].name);
        printf("\nEnter roll number : ");
        scanf("%d", &stud[i].roll_no);
        printf("\nEnter fees : ");
        scanf("%f", &stud[i].fees);
        printf("\nEnter DOB : ");
        scanf("%d %d %d", &stud[i].date.day, &stud[i].date.month, &stud[i].date.year);
        printf("\n");
    }
    
    
    // Output using for loop
    for (int i = 0; i < n; i++)
    {   
        printf("\nStudent : %d", i+1);
        printf("\nSTUDENT DETAILS");
        printf("\nName : %s", stud[i].name);
        printf("\nRoll number : %d", stud[i].roll_no);
        printf("\nFess : %.2f", stud[i].fees);
        printf("\nDOB : %d/%d/%d", stud[i].date.day, stud[i].date.month, stud[i].date.year);
        printf("\n");
    }
    
    return 0;
}