//Write a program to Find sum and average of array. 

#include <stdio.h>
int main(){
    int arr[100];
    int n, i, sum = 0;
    float average;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    average = (float)sum / n;

    printf("Sum of array = %d\n", sum);
    printf("Average of array = %.2f\n", average);

    return 0;
}