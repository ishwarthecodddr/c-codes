//Write a program in C to delete all the duplicate in an array.
#include<stdio.h>
void main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d array elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    //to remove duplicate
    printf("\nThe array with no duplicate elements is : ");
    int str =0;
    printf("%d ",arr[0]);
    int j = str+1;
    while(j<n){
        if(arr[str]!=arr[j]) printf("%d ",arr[j]);
        j++;
    }
    }