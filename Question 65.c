// C program to merge two arrays

#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], merged[200];
    int n1, n2;

    printf("Enter size of array1: ");
    scanf("%d", &n1);

    printf("Enter elements in array1:\n");
    for(int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of array2: ");
    scanf("%d", &n2);

    printf("Enter elements in array2:\n");
    for(int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Merge first array
    for(int i = 0; i < n1; i++)
    {
        merged[i] = arr1[i];
    }

    // Merge second array
    for(int i = 0; i < n2; i++)
    {
        merged[n1 + i] = arr2[i];
    }

    printf("Merged array: ");

    for(int i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}