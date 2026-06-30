//Write a program to Find common characters in strings. 
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int count1[256] = {0};
    int count2[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count characters of first string
    for(i = 0; str1[i] != '\0'; i++)
    {
        count1[(unsigned char)str1[i]] = 1;
    }

    // Count characters of second string
    for(i = 0; str2[i] != '\0'; i++)
    {
        count2[(unsigned char)str2[i]] = 1;
    }

    printf("Common characters: ");

    // Find common characters
    for(i = 0; i < 256; i++)
    {
        if(count1[i] && count2[i])
        {
            printf("%c ", i);
        }
    }

    return 0;
}
