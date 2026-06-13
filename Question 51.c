//Write a program to Find largest and smallest element in array. 

#include <stdio.h>
int main(){
    int arr[100];
    int n, i;
    int largest, smallest;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    smallest = arr[0];
    for(i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }

        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}