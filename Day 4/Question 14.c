//Write a program to Find nth Fibonacci term. 

#include <stdio.h>
int main()
{
    int num, i, term1 = 0, term2 = 1, next_term;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    if(num == 1){
        printf("fibonacci term is %d\n", term1);
    }
    else if(num == 2){
        printf("fibonacci term is %d\n", term2);
    }
    else{
        for(i = 3; i <= num; i++){
            next_term = term1 + term2;
            term1 = term2;
            term2 = next_term;
        }
        printf("fibonacci term is %d\n", next_term);
    }

    return 0;
}
