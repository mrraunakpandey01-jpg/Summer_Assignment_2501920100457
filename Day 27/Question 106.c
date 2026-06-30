//Write a program to Create employee management system. 
#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n, i, choice;

    printf("===== Employee Management System =====\n");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    do
    {
        printf("\n\n===== Menu =====\n");
        printf("1. Display All Employees\n");
        printf("2. Search Employee by ID\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEmployee Records:\n");

                for(i = 0; i < n; i++)
                {
                    printf("\nEmployee ID: %d", emp[i].id);
                    printf("\nName: %s", emp[i].name);
                    printf("\nSalary: %.2f\n", emp[i].salary);
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
                        printf("\nEmployee Found:");
                        printf("\nEmployee ID: %d", emp[i].id);
                        printf("\nName: %s", emp[i].name);
                        printf("\nSalary: %.2f", emp[i].salary);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Employee record not found.");
                }

                break;
            }

            case 3:
                printf("Exiting Employee Management System...");
                break;

            default:
                printf("Invalid choice.");
        }

    } while(choice != 3);

    return 0;
}
