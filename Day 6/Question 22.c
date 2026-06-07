//Write a program to Convert binary to decimal.

#include <stdio.h>
int main()
{
    int binary, power = 1, decimal = 0, digit;
    printf("Enter a binary number: ");
    scanf("%d", &binary);
    while(binary > 0){
        digit = binary % 10;
        decimal = decimal + (digit * power);
        power = power * 2;
        binary = binary / 10;
    }
    printf("Decimal number = %d\n", decimal);
    return 0;
}
