#include<stdio.h>
void main(){
    int n,j=0,k=0;
    printf("Enter size of array : ");

    scanf("%d",&n);
    int arr[n],even[j],odd[k];
    printf("Enter array elements : ");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even[j]=arr[i];
            j++;
        }else{
            odd[k]=arr[i];
            k++;
        }
    }
  printf("Output array : ");
   for(int i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }
    for(int i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }
    }