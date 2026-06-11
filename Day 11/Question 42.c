// Write a program to Write function to find maximum.

#include <stdio.h>
int maximum(int a , int b){
    if(a > b)
         return a;
    else
       return b;
}

int main()
{
    int a, b, max;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    max = maximum (a,b);
    printf("%d\n", max);

    return 0;
}
