//Write a program to Create student record management system. 
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student students[100];
    int n, i, choice;

    printf("===== Student Record Management System =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student records
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll);

        printf("Enter Name: ");
        scanf("%s", students[i].name);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display menu
    do
    {
        printf("\n\n===== Menu =====\n");
        printf("1. Display All Records\n");
        printf("2. Search Student by Roll Number\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nStudent Records:\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nRoll Number: %d", students[i].roll);
                    printf("\nName: %s", students[i].name);
                    printf("\nMarks: %.2f\n", students[i].marks);
                }
                break;

            case 2:
            {
                int roll, found = 0;

                printf("Enter roll number to search: ");
                scanf("%d", &roll);

                for(i = 0; i < n; i++)
                {
                    if(students[i].roll == roll)
                    {
                        printf("\nStudent Found:");
                        printf("\nRoll Number: %d", students[i].roll);
                        printf("\nName: %s", students[i].name);
                        printf("\nMarks: %.2f", students[i].marks);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Student record not found.");
                }

                break;
            }

            case 3:
                printf("Exiting system...");
                break;

            default:
                printf("Invalid choice.");
        }

    } while(choice != 3);

    return 0;
}