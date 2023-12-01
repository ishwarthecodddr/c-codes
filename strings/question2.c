// Write a program to extract last character of every word present in a sentence.
#include<stdio.h>
#include<string.h>
void main(){
    char str[500];
    printf("Enter the string : ");
    gets(str);
    int n = strlen(str);
    for(int i = 1;i<=n;i++){
        if(str[i]==' ' || str[i]=='\0'){
            printf("%c ",str[i-1]);
        }
    }
}