// Write a program to concatenate two strings without using any library function.
#include<stdio.h>
#include<string.h>
void main(){
    int i ,j;
    char firstname[]="Ishwar";
    char secondname[]="Reddy";
    char name[100];
    for(i=0;firstname[i]!='\0';i++) name[i]=firstname[i];
    name[i]=' ';
    for(j=0;secondname[j]!='\0';j++) name[i+j+1]=secondname[j];
    name[i+j+1]=' ';
    printf("%s",name);

}