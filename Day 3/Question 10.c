//Write a program to Print prime numbers in a range. 

#include <stdio.h>

int main() {
    int a, b, i, j, prime;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    for(i = a; i <= b; i++) {
        if(i < 2)
            continue;
            prime = 1;

        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                prime = 0; 
                break;
            }
        }

        if(prime == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}
