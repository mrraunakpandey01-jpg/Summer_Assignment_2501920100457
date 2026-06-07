//Write a program to Find GCD of two numbers

#include <stdio.h>

int main() {
    int a, b, i,gcd = 1;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    for(i = 1; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0){
        gcd = i;
    }
    }
    
    printf("gcd is %d\n", gcd);


    return 0;
}
