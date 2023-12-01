// WAP to find the factorial of a number n by using a suitable user defined function.
#include<stdio.h>
int factorial(int a){
    int mul=1;
    for(int i =a;i>0;i--){
        mul*=i;
    }
}
void main(){
    int a,c;
    printf("Enter the number : ");
    scanf("%d",&a);
    c=factorial(a);
    printf("Factorial of %d is %d ",a,c);

}