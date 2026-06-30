//Write a program to Create marksheet generation system. 
#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int marks[5];
    int total;
    float percentage;
    char grade;
};

int main()
{
    struct Student student[100];
    int n, i, j, choice;

    printf("===== Marksheet Generation System =====\n");

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Input student details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &student[i].roll);

        printf("Enter Name: ");
        scanf("%s", student[i].name);

        student[i].total = 0;

        printf("Enter marks of 5 subjects:\n");
        for(j = 0; j < 5; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &student[i].marks[j]);

            student[i].total += student[i].marks[j];
        }

        // Calculate percentage
        student[i].percentage = student[i].total / 5.0;

        // Assign grade
        if(student[i].percentage >= 90)
            student[i].grade = 'A';
        else if(student[i].percentage >= 75)
            student[i].grade = 'B';
        else if(student[i].percentage >= 60)
            student[i].grade = 'C';
        else if(student[i].percentage >= 40)
            student[i].grade = 'D';
        else
            student[i].grade = 'F';
    }

    do
    {
        printf("\n\n===== Menu =====\n");
        printf("1. Display Marksheet\n");
        printf("2. Search Student by Roll Number\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                for(i = 0; i < n; i++)
                {
                    printf("\n----- Marksheet -----\n");
                    printf("Roll Number: %d\n", student[i].roll);
                    printf("Name: %s\n", student[i].name);

                    printf("Marks:\n");
                    for(j = 0; j < 5; j++)
                    {
                        printf("Subject %d: %d\n",
                               j + 1, student[i].marks[j]);
                    }

                    printf("Total Marks: %d/500\n", student[i].total);
                    printf("Percentage: %.2f%%\n", student[i].percentage);
                    printf("Grade: %c\n", student[i].grade);
                }
                break;

            case 2:
            {
                int roll, found = 0;

                printf("Enter Roll Number to search: ");
                scanf("%d", &roll);

                for(i = 0; i < n; i++)
                {
                    if(student[i].roll == roll)
                    {
                        printf("\nStudent Found\n");
                        printf("Name: %s\n", student[i].name);
                        printf("Total Marks: %d\n", student[i].total);
                        printf("Percentage: %.2f%%\n", student[i].percentage);
                        printf("Grade: %c\n", student[i].grade);

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
                printf("Exiting Marksheet System...");
                break;

            default:
                printf("Invalid choice.");
        }

    } while(choice != 3);

    return 0;
}