// Write a C program to extract a substring from a given string. Prompt the user to enter the starting position and length of the substring.
#include<stdio.h>
#include<string.h>
void main(){
    int n , m ;
    char str[100];
    printf("Enter string : ");
    gets(str);
    printf("Enter starting position : ");
    scanf("%d",&n);
    printf("Enter length of the substring : ");
    scanf("%d",&m);
    for(int i=n;i<=m;i++){
        printf("%c",str[i]);
    }

}