// WAP to check whether two matrices are equal or not.
#include<stdio.h>
void main(){
    int n , m;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("Enter number of columns : ");
    scanf("%d",&m);
    int arr[n][m];
    int brr[n][m];
    printf("Enter array elements of matrix A : ");
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter array elements of matrix B : ");
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    char flag = 't';
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]!=brr[i][j]){
            flag='f';
            }
        }
    }
    if(flag=='f') printf("Not equal matrix ");
    else printf("Equal matrix ");



}