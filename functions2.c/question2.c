// WAP to sort the elements of an 1-D array in ascending order by using a suitable user defined function for sort operation.
#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}
void sort(int arr[],int n){
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) swap( &arr[i], &arr[j]);
        }
    }
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
    printf("Before sorting ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nAfter sorting ");
    sort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}