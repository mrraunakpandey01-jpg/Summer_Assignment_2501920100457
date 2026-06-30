//Write a program to Sort names alphabetically. 
#include <stdio.h>
#include <string.h>

int main()
{
    char names[100][50];
    char temp[50];
    int n, i, j;

    printf("Enter number of names: ");
    scanf("%d", &n);

    printf("Enter names:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }

    // Sorting names alphabetically using bubble sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(strcmp(names[j], names[j + 1]) > 0)
            {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("\nNames in alphabetical order:\n");

    for(i = 0; i < n; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}
