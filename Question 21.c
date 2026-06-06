//Write a program to Convert decimal to binary.

#include <stdio.h>
int main()
{
    int n, i = 0, binary[32];
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    while(n > 0){
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary number is: ");
    for(int j = i - 1; j >= 0; j--){
    printf("%d", binary[j]);
    }

    return 0;
}