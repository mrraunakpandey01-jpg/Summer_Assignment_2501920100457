//Write a program to Create salary management system. 
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main()
{
    struct Employee emp[100];
    int n, i, choice;

    printf("===== Salary Management System =====\n");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee salary details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &emp[i].basicSalary);

        // Calculate allowances
        emp[i].hra = emp[i].basicSalary * 0.20;
        emp[i].da = emp[i].basicSalary * 0.10;

        // Calculate gross salary
        emp[i].grossSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;
    }

    do
    {
        printf("\n\n===== Menu =====\n");
        printf("1. Display Salary Details\n");
        printf("2. Search Employee Salary\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nSalary Details:\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nEmployee ID: %d", emp[i].id);
                    printf("\nName: %s", emp[i].name);
                    printf("\nBasic Salary: %.2f", emp[i].basicSalary);
                    printf("\nHRA: %.2f", emp[i].hra);
                    printf("\nDA: %.2f", emp[i].da);
                    printf("\nGross Salary: %.2f\n", emp[i].grossSalary);
                }
                break;

            case 2:
            {
                int id, found = 0;

                printf("Enter Employee ID to search: ");
                scanf("%d", &id);

                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == id)
                    {
                        printf("\nEmployee Salary Details:");
                        printf("\nEmployee ID: %d", emp[i].id);
                        printf("\nName: %s", emp[i].name);
                        printf("\nGross Salary: %.2f", emp[i].grossSalary);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee not found.");
                }

                break;
            }

            case 3:
                printf("Exiting Salary Management System...");
                break;

            default:
                printf("Invalid choice.");
        }

    } while(choice != 3);

    return 0;
}