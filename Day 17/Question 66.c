// C program to find the union of two arrays

#include <stdio.h>
int main()
{
    int arr1[100], arr2[100], unionArr[200];
    int n1, n2, n = 0;

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

    // Copy elements of first array
    for(int i = 0; i < n1; i++)
    {
        unionArr[n] = arr1[i];
        n++;
    }

    // Add elements of second array if not already present
    for(int i = 0; i < n2; i++)
    {
        int found = 0;

        for(int j = 0; j < n; j++)
        {
            if(arr2[i] == unionArr[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            unionArr[n] = arr2[i];
            n++;
        }
    }

    printf("Union of arrays: ");

    for(int i = 0; i < n; i++)
    {
        printf("%d ", unionArr[i]);
    }

    return 0;
}
