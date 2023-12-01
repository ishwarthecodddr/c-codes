// Write a C program to swap the first and last element of a 1-D array of using a function SWAP.
#include<stdio.h>
void swap(int arr[],int index1,int index2){
    int temp = arr[index1];
    arr[index1]=arr[index2];
    arr[index2]=temp;
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
    printf("Before swapping : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nAfter swapping : ");
    swap(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}