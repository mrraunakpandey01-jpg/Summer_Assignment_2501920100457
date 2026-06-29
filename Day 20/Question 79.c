//Write a program to Find row-wise sum.
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

    // Finding row-wise sum
    printf("Row-wise sum of matrix:\n");

    for(i = 0; i < rows; i++)
    {
        sum = 0;

        for(j = 0; j < cols; j++)
        {
            sum = sum + matrix[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
