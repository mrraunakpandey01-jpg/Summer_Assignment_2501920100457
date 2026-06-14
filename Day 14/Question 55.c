//Write a program to Second largest element. 

#include <stdio.h>
int main()
{
   int arr[100], n, i;
   int largest, second;
   printf("Enter the number of elments: ");
   scanf("%d", &n);
   printf("Enter the elements: \n");
   for(i=0;i<n;i++){
       scanf("%d", &arr[i]);
   }
   largest = second = arr[0];
   for(i=0;i<n;i++){
       if(arr[i]>largest){
           second = largest;
           largest = arr[i];
       }
   }
   for(i=1;i<n;i++){
       if(arr[i]>largest){
           second = largest;
           largest = arr[i];
       }
       else if(arr[i]>second && arr[i]!=largest){
           second = arr[i];
       }
   }
   printf("second largest element is %d\n", second);
   return 0;
}
