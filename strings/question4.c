// Write a program to check whether an entered string is palindrome or not.
#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    printf("Enter string : ");
    gets(str);
    int left,right,len;
    len = strlen(str);
    left=0;
    right=len-1;
    char flag = 't'; //true 
    while (left<right && flag == 't'  )
    {
       if(str[left]!=str[right]){
        flag='f';
       }
        left++;
        right--;
    }
    if(flag=='t') printf("Palindrome");
    else printf("Not a palindrome");
}