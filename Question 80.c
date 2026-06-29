//Write a program to Find column-wise sum. 
#include <stdio.h>

int main()
{
    int rows, cols, i, j, sum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of matrix:\n");
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Finding column-wise sum
    printf("Column-wise sum of matrix:\n");

    for(j = 0; j < cols; j++)
    {
        sum = 0;

        for(i = 0; i < rows; i++)
        {
            sum = sum + matrix[i][j];
        }

        printf("Sum of column %d = %d\n", j + 1, sum);
    }

    return 0;
}