//Write a program to Find longest word.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], word[50], longest[50];
    int i = 0, j = 0;
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Traverse the string
    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            word[j++] = str[i];
        }
        else
        {
            word[j] = '\0';

            // Check word length
            if(strlen(word) > maxLength)
            {
                maxLength = strlen(word);
                strcpy(longest, word);
            }

            j = 0;
        }

        if(str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d", maxLength);

    return 0;
}