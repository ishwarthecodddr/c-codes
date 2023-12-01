// Write a C program to determine the second largest element of a 1-D array of using a function SECLARGEST.
#include<stdio.h>
#include<limits.h>
int SECLARGEST(int arr[],int n){
    int largest= INT_MIN;
    int seclargest = INT_MIN;
    for(int i =0;i<n;i++) {
        if(arr[i]>largest) {
            seclargest = largest;
            largest = arr[i];
        }
    }
    return seclargest;
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
    printf("Second largest element in the array is %d",SECLARGEST(arr,n));
}