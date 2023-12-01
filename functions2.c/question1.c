// WAP to design a user defined function to calculate the sum of the elements of an integer 1-D array
#include<stdio.h>
int arrsum(int arr[],int n ){
    int sum =0;
    for(int i =0;i<n;i++){
        sum+=arr[i];
    }
   printf("%d",sum);
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
    printf("Sum of elements of given array is : ");
    arrsum(arr,n);

}