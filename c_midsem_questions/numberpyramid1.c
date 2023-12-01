#include<stdio.h>
void main()
{
    int n=4,row,spaces;
    for( row =1;row<=n;row++){
        for(spaces=0;spaces<n-row;spaces++){
            printf(" ");
        }
        for(int j=0;j<row;j++){
            printf("%d ",row);
        }
        printf("\n");
    }

}