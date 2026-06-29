//Write a program to Check symmetric matrix. 
#include <stdio.h>

int main()
{
    int n, i, j;
    int flag = 1;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Checking symmetric matrix
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(matrix[i][j] != matrix[j][i])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
    {
        printf("The matrix is symmetric.");
    }
    else
    {
        printf("The matrix is not symmetric.");
    }

    return 0;
}
