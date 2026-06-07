//WAP to check whether a number is palindrome.

int main()
{
    int n, digits, original;
    int reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while(n != 0){
        digits = n % 10;
        reverse = reverse * 10 + digits;
        n /= 10;
    }
    if(original == reverse){
        printf("Number is Palindrome.\n");
    }
    else{
        printf("Number is not Palindrome.\n");
    }

    return 0;
}