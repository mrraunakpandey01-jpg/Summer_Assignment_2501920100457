//Write a program to Count even and odd elements in array. 

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int even = 0, odd = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    // Input array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Count even and odd elements
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Total even elements = %d\n", even);
    printf("Total odd elements = %d\n", odd);

    return 0;
}