//Write a program to Rotate array left. 

#include<stdio.h>
int main(){
    int arr[100], n;
    printf("Enter the size of array\n: ");
    scanf("%d", &n);
    printf("Enter the elements\n: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int temp = arr[0];
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
        arr[n-1] = temp;
        printf("Let rotated array\n: ");
        for(int i=0;i<n;i++){
            printf("%d", arr[i]);
        }
    return 0;
}
