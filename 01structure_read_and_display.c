#include<stdio.h>
#include<string.h>
// To read and display student information using structure

int main()
{
    // Defining structure 'student'
    struct student
    {
        int Roll_no;
        char name[30];
        float fees;
        char DOB[20];
    };
    
    // Declaring structure variable
    struct student stud1;

    // Taking input
    printf("Enter name : ");
    fgets(stud1.name, sizeof(stud1.name), stdin);  // Allows spaces
    printf("Enter roll number : ");
    scanf("%d", &stud1.Roll_no);
    printf("Enter fees : ");
    scanf("%f", &stud1.fees);
    printf("Enter date of birth : ");
    scanf("%s", stud1.DOB);

    // Displaying output
    printf("\nSTUDENT'S DETAILS ");
    printf("\nRoll number : %d", stud1.Roll_no);
    printf("\nName : %s", stud1.name);
    printf("\nFees : %.2f", stud1.fees);
    printf("\nDOB : %s", stud1.DOB);

    return 0;

}