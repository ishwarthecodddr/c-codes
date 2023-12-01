#include<stdio.h>
void main(){
    int m,i ;
    printf("Enter size of array : ");
    scanf("%d",&m);
    int arr[m];
    int *p=arr;
    printf("Enter values : ");
    for(i=0;i<m;i++){
        scanf("%d",(p+i));
    }
    printf("Array elements are : ");
    for(i=0;i<m;i++){
        printf("%d ",*(p+i));
    }
    int *q= arr+m-1; 
    printf("\nReverse array : ");
    i=0;
    while(i<m){
        printf("%d ",*(q+i));
        i++;
    }
        
    
}