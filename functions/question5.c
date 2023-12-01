// Write a C program to perform swapping of two integers using a function SWAP.
#include<stdio.h>
// void swap (int a, int b);
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}
void main(){
    int a , b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("Before swapping a = %d , b = %d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping a = %d , b = %d",a,b);
}