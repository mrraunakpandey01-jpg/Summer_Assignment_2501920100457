//Write a program to Remove duplicate characters. 
#include <stdio.h>

int main()
{
    char str[100], result[100];
    int visited[256] = {0};
    int i, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove duplicate characters
    for(i = 0; str[i] != '\0'; i++)
    {
        if(visited[(unsigned char)str[i]] == 0)
        {
            result[j++] = str[i];
            visited[(unsigned char)str[i]] = 1;
        }
    }

    result[j] = '\0';

    printf("String after removing duplicates: %s", result);

    return 0;
}
