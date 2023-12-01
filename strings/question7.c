// Write a program to count the number of vowels, consonants, new lines and the total number of characters and words present in a string.
#include<stdio.h>
#include<string.h>
void main(){
    char str[100];
    printf("Enter string : ");
    scanf("%c",gets(str));
    // puts(str);
    int strlength=strlen(str);
    int characters=0;
    //for number of characters
    for(int i=0;i<strlength;i++){
        characters++;
    }
    //for number of vowels and consonants.
    int vow=0;
    int cons=0;
    for(int i =0;i<strlength;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vow++;
        }
        else cons++;
    }
    int newline =0;
    for(int i=0;i<strlength;i++){
       if(str[i]=="\n") newline++;
       
    }
    printf("Number of character = %d \n",characters);
    printf("Number of vowels = %d \n",vow);
    printf("Number of consonants = %d \n",cons);
    printf("Number of new line  = %d",newline);

}