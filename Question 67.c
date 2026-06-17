// C program to find the intersection of two arrays

#include <stdio.h>
int main()
{
    int arr1[100], arr2[100];
    int n1, n2;

    printf("Enter size of array1: ");
    scanf("%d", &n1);

    printf("Enter elements of array1:\n");
    for(int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of array2: ");
    scanf("%d", &n2);

    printf("Enter elements of array2:\n");
    for(int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("Intersection of arrays: ");

    // Find common elements
    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }

    return 0;
}