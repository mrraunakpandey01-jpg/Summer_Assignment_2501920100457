//Write a program to Find largest prime factor of a number.

#include <stdio.h>

int main()
{
    int num, i, largestPrime = 0, j, isPrime;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 2; i <= num; i++)
    {
        if(num % i == 0)   // i is a factor
        {
            isPrime = 1;

            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }

            if(isPrime == 1)
            {
                largestPrime = i;
            }
        }
    }

    printf("Largest Prime Factor = %d\n", largestPrime);

    return 0;
}