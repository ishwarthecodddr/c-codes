#include<stdio.h>
void main()
{
    int arr[3][3];
    printf("Enter array elements : ");
     for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int trace =0;
    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                trace+=arr[i][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
    }
    printf("\nTrace of matrix is : ");
    printf("%d",trace);
}