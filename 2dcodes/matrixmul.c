#include<stdio.h>
void main()
{
    int n , m ,y,z,sum=0;
    printf("Enter number of rows for first Array : ");
    scanf("%d",&n);
    printf("Enter number of columns for first Array : ");
    scanf("%d",&m);
    int arr[n][m];
    printf("Enter number of rows for second Array : ");
    scanf("%d",&y);
    printf("Enter number of columns for second Array : ");
    scanf("%d",&z);
    int brr[y][z];
    int ans[m][y];
    if(m==y){
    printf("Enter value  of matrix A : ");
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    printf("Value of matrix A : ");
    for(int i =0;i<n;i++){
        printf("\n");
        for(int j=0;j<m;j++){
        printf("%d ",arr[i][j]);
        }
    }
    printf(" \nEnter value  of matrix B : ");
     for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
        scanf("%d",&brr[i][j]);
        }
    }
    printf("Value of matrix B : ");
    for(int i =0;i<n;i++){
        printf("\n");
        for(int j=0;j<m;j++){
        printf("%d ",brr[i][j]);
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            for(int k=0;k<n;k++){
                sum=sum+(arr[i][k]*brr[k][j]);
            }
            ans[i][j]=sum;
            sum=0;
        }
        
    }
    printf("\nAfter multiplication resultant matrix is : ");
    for(int i =0;i<n;i++){
        printf("\n");
        for(int j=0;j<m;j++){
        printf("%d ",ans[i][j]);
        }
    }

}
else{
    printf("Multiplication not possible : ");
}
}