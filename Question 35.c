/*Write a program to Print number triangle. 
 * 
 * A 
 * B B 
 * C C C 
 * D D D D 
 * E E E E E */

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    char ch = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",ch);
        }
        printf("\n");
        ch++;
    }

    return 0;
}