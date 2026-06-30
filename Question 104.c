//Write a program to Create quiz application.
#include <stdio.h>

int main()
{
    int choice;
    int score = 0;

    printf("===== Quiz Application =====\n\n");

    // Question 1
    printf("1. Which language is used for system programming?\n");
    printf("1. Python\n");
    printf("2. C\n");
    printf("3. Java\n");
    printf("4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 2)
    {
        score++;
    }

    // Question 2
    printf("\n2. Which keyword is used to declare a variable in C?\n");
    printf("1. int\n");
    printf("2. var\n");
    printf("3. define\n");
    printf("4. declare\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        score++;
    }

    // Question 3
    printf("\n3. Which symbol is used to end a statement in C?\n");
    printf("1. :\n");
    printf("2. ;\n");
    printf("3. .\n");
    printf("4. ,\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 2)
    {
        score++;
    }

    // Question 4
    printf("\n4. Which function is used to print output in C?\n");
    printf("1. scanf()\n");
    printf("2. input()\n");
    printf("3. printf()\n");
    printf("4. output()\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 3)
    {
        score++;
    }

    // Question 5
    printf("\n5. What is the size of int data type (commonly)?\n");
    printf("1. 1 byte\n");
    printf("2. 2 bytes\n");
    printf("3. 4 bytes\n");
    printf("4. 8 bytes\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if(choice == 3)
    {
        score++;
    }

    printf("\n===== Quiz Result =====\n");
    printf("Your score: %d/5\n", score);

    if(score == 5)
    {
        printf("Excellent!");
    }
    else if(score >= 3)
    {
        printf("Good job!");
    }
    else
    {
        printf("Keep practicing!");
    }

    return 0;
}