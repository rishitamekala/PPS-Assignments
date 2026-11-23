#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    int marks1, marks2, marks3;
    int total;
    float percentage;
};

int main()
{
    struct Student s[50];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Accept student details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Name: ");
        scanf(" %49[^\n]", s[i].name);

        printf("Enter marks in Subject 1: ");
        scanf("%d", &s[i].marks1);

        printf("Enter marks in Subject 2: ");
        scanf("%d", &s[i].marks2);

        printf("Enter marks in Subject 3: ");
        scanf("%d", &s[i].marks3);

        // Calculate total and percentage
        s[i].total = s[i].marks1 +
                     s[i].marks2 +
                     s[i].marks3;

        s[i].percentage = s[i].total / 3.0;
    }

    // Display student results
    printf("\n========== STUDENT RESULTS ==========\n");

    for (i = 0; i < n; i++)
    {
        printf("\nRoll Number : %d", s[i].rollno);
        printf("\nName        : %s", s[i].name);
        printf("\nMarks 1     : %d", s[i].marks1);
        printf("\nMarks 2     : %d", s[i].marks2);
        printf("\nMarks 3     : %d", s[i].marks3);
        printf("\nTotal Marks : %d", s[i].total);
        printf("\nPercentage  : %.2f%%", s[i].percentage);

        if (s[i].marks1 >= 35 &&
            s[i].marks2 >= 35 &&
            s[i].marks3 >= 35)
        {
            printf("\nResult      : PASS");
        }
        else
        {
            printf("\nResult      : FAIL");
        }

        printf("\n-----------------------------------\n");
    }

    return 0;
}
