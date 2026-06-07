//WAP to reverse a number.

#include <stdio.h>

int main()
{
    int n, digits, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n == 0){
        reverse = 0;
        printf("reverse of number is = %d\n", reverse);
    } 
    else{
        while(n != 0){
            digits = n % 10;
            reverse = reverse * 10 + digits;
            n /= 10;
        }
        printf("Reverse number is = %d\n", reverse);
    }

    return 0;
}