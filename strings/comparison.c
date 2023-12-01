#include<stdio.h>
#include<string.h>
void main(){
    int  i;
    char str1[100];
    char str2[100];
    printf("enter string1 : ");
    gets(str1);
    printf("enter string2 : ");
    gets(str2);
    i=0;
    while(str1[i]==str2[i] && str1[i] != '\0' && str2[i] != '\0' ) i++;
    if(str1[i]=='\0' && str2[i]=='\0') printf("\nStrings are equal ");
    else printf("\nStrings are not equal  ");
}