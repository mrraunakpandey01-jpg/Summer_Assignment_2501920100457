//Write a program to Generate Fibonacci series.

#include <stdio.h>
int main()
{
    int num, i, term1 = 0, term2 = 1, next_term;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    printf("%d%d", term1, term2);
    for(i = 3; i <= num; i++){
         next_term = term1 + term2;
        printf("%d\n", next_term);
        term2 = term1;
        term1 = next_term;
       
    }

    return 0;
}