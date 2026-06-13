//Write a program to Write function for perfect number. 

#include <stdio.h>
int perfect(int n){
    int i;
    int sum = 0;
    for(i = 1; i < n; i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }
        if(sum == n){
            return 1;
        }
        else{
            return 0;
        }
        
    
    
}
int main(){
    int n, result;
    printf("Enter the number: ");
    scanf("%d", &n);
    result = perfect(n);
    printf("%d\n", result);
    if(result == 1){
        printf("number is perfect number.\n");
    }
    else{
        printf("number is not perfect number.\n");
    }
    return 0;
}
