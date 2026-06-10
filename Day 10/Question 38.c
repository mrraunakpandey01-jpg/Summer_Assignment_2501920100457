/*Write a program to Print reverse pyramid. 
********* 
 ******* 
  ***** 
   *** 
    *  */

#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=n;j<=i;j++){
            printf(" ");
        }
        for(int j=1;j<=( 2*( n - i ) + 1 );j++){
            printf("*");
        }       
        printf("\n");
    }
    return 0;
}
