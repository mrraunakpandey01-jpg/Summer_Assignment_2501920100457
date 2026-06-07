#include <stdio.h>
int main(){
int i, n, multiplication = 0;
printf("Enter the value of n:" );
scanf("%d", &n);
for (i = 1; i <= 10; i++){
    multiplication = n * i;
    printf("Multiplication of n is %d\n", multiplication);
}
    return 0;
}
