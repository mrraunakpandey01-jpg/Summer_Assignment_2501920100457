
//WAP to find the sum of digits of a number.
#include <stdio.h>

int main()
{
    int n, digits, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n == 0){
        sum == 0;
        printf("sum of digits = %d\n", sum);
    } 
    else{
        while(n != 0){
            digits = n % 10;
            sum = sum + digits;
            n /= 10;
        }
        printf("sum of digits = %d\n", sum);
    }

    return 0;
}