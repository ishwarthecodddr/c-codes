//   WAP to find out the value of nth term of the Fibonacci sequence by writing a suitable user defined function.
#include<stdio.h>
int fib(int a){
    printf("0 1 ");
    int curr = 1;
    int prev=0;
    int sum =0;
    for(int i=1;i<=a-2;i++){
        sum=curr+prev;
        printf("%d ",sum);
        prev=curr;
        curr=sum;
    }
}
void main(){
    int a ; 
    printf("Enter the number of terms : ");
    scanf("%d",&a);
    int c = fib(a);

}