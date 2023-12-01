#include<stdio.h>
void main(){
    int num =4,row,col,space,count=1;
    for(row =1 ; row<=num;row++){
        for(space=0;space<=(num-row);space++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("%d ",count++);
        }
        printf("\n");
    }
}