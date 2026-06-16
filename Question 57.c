//Write a program to Reverse array. 

#include <stdio.h>
int main(){
    int arr[5];
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter the element: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &arr[5]);
    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    printf("Reversed array: ");
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }

    return 0;
}
