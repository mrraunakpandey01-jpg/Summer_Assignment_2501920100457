//Write a program to Recursive reverse number.

#include <stdio.h>
int rev = 0;
int reverseNumber(int n){
    if(n == 0){
        return rev;
    }

    rev = rev * 10 + (n % 10);
    return reverseNumber(n / 10);
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reverse number = %d\n", reverseNumber(n));
    return 0;
}
