//  Write a C program to determine the largest and smallest element of a 1-D array. Use functions LARGEST and SMALLEST for the given purpose.
#include<stdio.h>
int largest(int arr[],int n){ // n is array size.
    int largest = -99999;
    for(int i =0;i<n;i++) {
        if(arr[i]>largest) largest = arr[i];
    }
    return largest;
}
int smallest(int arr[],int n){ // n is array size.
    int smallest = 9999999;
    for(int i =0;i<n;i++) {
        if(arr[i]<smallest) smallest = arr[i];
    }
    return smallest;
}
void main(){
    int n ;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Largest element in the array is  %d ",largest(arr,n));
    printf("\nSmallest element in the array is %d ",smallest(arr,n));
    
}