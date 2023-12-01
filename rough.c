#include<stdio.h>
#include<conio.h>

int main()
 {
    char s[100];
    char *str;
    s[0] = 50;
    printf("Input the character:");
    str = cgets(s);
    printf("\nOutput on the screen: %s", str);
    return 0;
 }
