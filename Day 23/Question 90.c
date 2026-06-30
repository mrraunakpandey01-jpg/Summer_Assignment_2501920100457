//Write a program to Find first repeating character. 
#include <stdio.h>

int main()
{
    char str[100];
    int count[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for(i = 0; str[i] != '\0'; i++)
    {
        count[(unsigned char)str[i]]++;
    }

    // Find first repeating character
    for(i = 0; str[i] != '\0'; i++)
    {
        if(count[(unsigned char)str[i]] > 1)
        {
            printf("First repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No repeating character found.\n");

    return 0;
}
