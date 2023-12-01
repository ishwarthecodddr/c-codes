#include <stdio.h>
void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}
void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}
void pattern6(int n){
for(int i =0;i<n;i++){
    //spaces
    for(int j =0; j<n-i-1;j++){
     printf(" ");
    }
    //stars
    for(int k = 0 ; k < 2*i+1;k++){
        printf("*");
    }
    //spaces
    for(int j =0; j<n-i-1;j++){
     printf(" ");
    }
    printf("\n");
    }

}
void pattern7(int n){
    for(int i =0;i<n;i++){
    //spaces
    for(int j =0; j<=i;j++){
     printf(" ");
    }
    //stars
    for(int k = 0 ; k < 2*n-(2*i+1);k++){
        printf("*");
    } 
    //spaces
    for(int j =0; j<=i;j++){
     printf(" ");
    }
    printf("\n");
    }
}
void pattern8(int n){
    for(int i =0;i<n;i++){
    //spaces
    for(int j =0; j<n-i-1;j++){
     printf(" ");
    }
    //stars
    for(int k = 0 ; k < 2*i+1;k++){
        printf("*");
    }
    //spaces
    for(int j =0; j<n-i-1;j++){
     printf(" ");
    }
    printf("\n");
    }
    for(int i =0;i<n;i++){
    //spaces
    for(int j =1; j<=i;j++){
     printf(" ");
    }
    //stars
    for(int k = 0 ; k < 2*n-(2*i+1);k++){
        printf("*");
    } 
    //spaces
    for(int j =0; j<=i;j++){
     printf(" ");
    }
    printf("\n");
    }
}
void pattern9(int n){
    int start = 1;
    for(int i = 0 ; i < n ; i ++){
        if(i%2==0) start =1;
        else start = 0; 
        for(int j = 0 ; j<=i;j++){
            printf("%d ",start);
            start = 1-start;
        }
        printf("\n");
    
    }
}
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    // pattern1(n);
    // pattern2(n);3
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);  // triangle
    // pattern7(n);   // reverse triangle
    //pattern8(n); // diamond 
    pattern9(n);
}