#include<stdio.h>
void main()
{
    int arr[3][3] , i ,j,sum ;
    printf("Enter array elements : ");
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
        scanf("%d ",&arr[i][j]);
        }
    }
    printf("Matrix is : ");
    for(int i =0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
        printf("%d ",arr[i][j]);
        }
    }
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i<j || i==j) sum+=arr[i][j];
        }
        }
    printf("\nSum of upper triangular matrix is : %d ",sum);
    
 }