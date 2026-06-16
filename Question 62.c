//Write a program to find the maximum frequency element in an array.

#include <stdio.h>
int main()
{
    int arr[100], n;
    int maxCount = 0, maxElement = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find maximum frequency element
    for(int i = 0; i < n; i++)
    {
        int count = 1;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Maximum frequency element is: %d\n", maxElement);
    printf("Frequency is: %d", maxCount);

    return 0;
}