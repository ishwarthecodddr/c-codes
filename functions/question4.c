// WAP to determine whether a number is prime or not using a function named as “PRIME”.
#include<stdio.h>
int prime(int a ){
    char flag='t';
    for(int i =2;i<a;i++){
        if(a%i==0 && a%a==0){
            flag='f';
        }
    }
    if(flag=='t') printf("Prime");
    if(flag=='f') printf("Not prime");
}
void main(){
    int a ; 
    printf("Enter number : ");
    scanf("%d",&a);
    prime(a);
}