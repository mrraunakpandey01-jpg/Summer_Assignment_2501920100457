//Write a program to Character frequency. 
#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int i, count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the character to find frequency: ");
    scanf(" %c", &ch);

    // Count character frequency
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            count++;
        }
    }

    printf("Frequency of '%c' = %d", ch, count);

    return 0;
}
