//Write a program to Check string rotation. 
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Check length
    if(strlen(str1) != strlen(str2))
    {
        printf("Strings are not rotations.");
        return 0;
    }

    // Concatenate first string with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if second string exists in concatenated string
    if(strstr(temp, str2) != NULL)
    {
        printf("Strings are rotations.");
    }
    else
    {
        printf("Strings are not rotations.");
    }

    return 0;
}
