//Write a program to Print Armstrong numbers in a range.

#include <stdio.h>
int main(){
    int num, a, b, temp, digit, sum;
    printf("Enter the numbers a and b");
    scanf("%d%d", &a,&b);
    printf("Armstrong Strong number is\n");
    for(num = a; num <= b; num++){
        temp = num;
        sum = 0;
        
        while(temp != 0){
            digit = digit % 10;
            sum = sum + (digit * digit * digit);
            temp = temp / 10;
        }
        if(sum == num){
            printf("%d", num);
        }
    }
    return 0;
}
