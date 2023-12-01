// WAP to add two numbers entered through the keyboard by using a suitable user defined function.
#include<stdio.h>
int add (int a, int b ){
    int c; 
    c = a+b;
}
void main(){
    int a ,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    int c = add(a,b);
    printf("Sum of %d and %d is %d ",a,b,c);
}