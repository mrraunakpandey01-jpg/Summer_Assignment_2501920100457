//Write a program to Write function to check prime. 

#include <stdio.h>
int prime(int a){
    int i;
    if(a <= 1)
      return 0;
     for(i = 2; i < a; i++){
         if(a % i == 0)
            return 0;
     }
     return 1;
}

int main()
{
    int a, prime_number;
    printf("Enter the number: ");
    scanf("%d", &a);
    prime_number = prime(a);
    if(prime(a))
        printf("%d is a Prime Number.\n", a);
    else
        printf("%d is Not a Prime Number.\n", a);

    return 0;
}