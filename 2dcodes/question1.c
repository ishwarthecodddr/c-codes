#include<stdio.h>
void main()
{
    int n,m;
    printf("Enter number of cities : ");
    scanf("%d",&n);
    printf("Enter number of days : ");
    scanf("%d",&m);
    int arr[n][m];
    printf("Enter the temp: ");
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("\nCity %d, Day %d ",i+1,j+1);
            printf("= %d",arr[i][j]);
        }
    }

}