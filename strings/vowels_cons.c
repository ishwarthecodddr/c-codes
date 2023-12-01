#include<stdio.h>
#include<string.h>
void main(){
    int vow=0,conso=0,i;
    char str[500];
    printf("Enter a string : ");
    printf("%s",gets(str));
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u') vow++;
        else conso++;
    }
    printf("\nThe string contains %d vowels",vow);
    printf("\nThe string contains %d consonants",conso);
}