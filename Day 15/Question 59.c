//Write a program to Rotate array right. 

#include<stdio.h>
int main(){
    int arr[100], n;
    printf("Enter the size of array\n: ");
    scanf("%d", &n);
    printf("Enter the elements\n: ");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int temp = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i--];
    }
        arr[0] = temp;
        printf("Right rotated array\n: ");
        for(int i=0;i<n;i++){
            printf("%d", arr[i]);
        }
    return 0;
}
