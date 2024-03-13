#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    printf("Enter a string: ");
    gets(str1);
    printf("Enter another string to find substring: ");
    scanf("%s", str2);
    
     if (strstr(str1, str2))
        printf("'%s' is a substring of '%s'\n", str2, str1);
    else
        printf("'%s' is not a substring of '%s'\n", str2, str1);

    return 0;
}