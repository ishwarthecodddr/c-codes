// WAP to find the length of a string with/without using library function for getting length of the string
#include<stdio.h>
#include<string.h>
void main(){
    char str[20];
    printf("Enter the string : ");
    gets(str);
    puts(str);
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    printf("%d",i);
}