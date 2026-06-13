//Write a program to Write function for Armstrong. 

#include <stdio.h>
int armstrong(int n){
    int original, rem;
    int sum = 0;
    original = n;
    while(n != 0){
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if(sum == original){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int n, result;
    printf("Enter the number: ");
    scanf("%d", &n);
    result = armstrong(n);
    printf("%d\n", result);
    if(result == 1){
        printf("Number is armstrong\n");
    }
    else{
        printf("Nummber is not armstrong\n");
    }

    return 0;
}