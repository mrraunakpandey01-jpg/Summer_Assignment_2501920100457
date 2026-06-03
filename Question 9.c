//WAP to check whether a number is prime.

#include <stdio.h>
int main()
{
    int n, i,Prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1)
    {
      Prime = 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                Prime = 0;
            }
        }
    }

    if (Prime)
        printf("Number is a Prime Number.\n");
    else
        printf("Number is not a Prime Number.\n");

    return 0;
}