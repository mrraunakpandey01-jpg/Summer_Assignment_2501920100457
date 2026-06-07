//WAP to find the product of digits.

#include <stdio.h>
int main()
{
    int n, digits, Product = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n == 0){
        Product = 0;
        printf("Product of number is = %d\n", Product);
    } 
    else{
        while(n != 0){
            digits = n % 10;
            Product = Product * digits;
            n /= 10;
        }
        printf("Product of number is = %d\n", Product);
    }

    return 0;
}