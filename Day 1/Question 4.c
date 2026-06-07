#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n == 0) {
        count = 1;
    } else {
         
            n = n / 10;
            count++;
        
    }

    printf("Number of digits is %d\n", count);

    return 0;
}
