//Write a program to Find maximum occurring character. 
#include <stdio.h>

int main()
{
    char str[100];
    int count[256] = {0};
    int i, max = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for(i = 0; str[i] != '\0'; i++)
    {
        count[(unsigned char)str[i]]++;
    }

    // Find maximum occurring character
    for(i = 0; str[i] != '\0'; i++)
    {
        if(count[(unsigned char)str[i]] > max)
        {
            max = count[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d", max);

    return 0;
}
