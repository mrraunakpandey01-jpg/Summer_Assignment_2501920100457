//Write a program to Write function for palindrome. 

#include <stdio.h>
int palindrome(int n){
    int original, reverse = 0, rem;
    original = n;
    while(n > 0){
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    if(original == reverse){
        return 1;
    }
    else{
        return 0;
    }
    
}

int main()
{
    int n, result;
    printf("Enter the number: ");
    scanf("%d", &n);
    result = palindrome(n);
    if(result == 1)
    {
        printf("Number is Palindrome\n");
    }
    else
    {
        printf("Number is not Palindrome\n");
    }

    return 0;
}