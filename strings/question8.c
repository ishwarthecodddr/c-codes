// Write a program to count the frequency of each character present in a string.
#include<stdio.h>
#include<string.h>
void main(){        
    int i , j ,count=1;
    char str[100];
    printf("Enter string : ");
    scanf("%c",gets(str));
    for(i=0;i<strlen(str);i++){
        for(j=i+1;j<strlen(str);j++){
            if(str[i]==str[j]) count++;
        }
            printf("%c = %d , ",str[i],count);

    }
}