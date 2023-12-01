// WAP to find the factorial of a number n by writing a recursive function for it.
#include<stdio.h>
int factorial(int a){
    int mul=1;
    if(a == 1 || a==2) return a; 
    else return a*factorial(a-1);
}
void main(){
    int n ;
    printf("To find factorial of : ");
    scanf("%d",&n);
    printf("%d",factorial(n));
}