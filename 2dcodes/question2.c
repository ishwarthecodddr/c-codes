// WAP to find the sum of two matrices of order 2x2 using multidimensional arrays.
#include<stdio.h>
void main(){
    int m,n;
    printf("Enter number of rows for first Array : ");
    scanf("%d",&n);
    printf("Enter number of columns for first Array : ");
    scanf("%d",&m);
    int arr[n][m];
    int brr[n][m];
    printf("Enter elements of matrix A ");
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
        scanf("%d ",&arr[i][j]);
        }
    }
    printf("Enter elements of matrix B ");
    for(int i =0;i<m;i++){
        for(int j=0;j<n;j++){
        scanf("%d ",&brr[i][j]);
        }
    }
    printf("Addition of matrix is ");
    for(int i =0;i<m;i++){
        printf("\n");
        for(int j=0;j<n;j++){
        printf("%d ",arr[i][j]+brr[i][j]);
        }
    }
    
    


}