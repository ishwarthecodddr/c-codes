#include<stdio.h>
void main()
{
    int n, m ; 
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("Enter number of columns : ");
    scanf("%d",&m);
    int arr[n][m];
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original Matrix");
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
    }
    printf("\nTransposed Matrix ");
    for(int i=0;i<m;i++){
        printf("\n");
        for(int j=0;j<n;j++){
            printf("%d ",arr[j][i]);
        }
    }
}