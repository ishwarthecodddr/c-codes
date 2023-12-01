// WAP to calculate GCD/HCF of two numbers by using a recursive function.
#include<stdio.h>
int HCf(int num1 , int num2){

   if(num2!=0) return HCf(num2,num1%num2);
   else return num1;
}
void main(){
int a , b ; 
printf("Enter number 1 : ");
scanf("%d",&a);
printf("Enter number 2 : ");
scanf("%d",&b);
printf("Hcf is : ");
printf("%d",HCf(a,b));
}