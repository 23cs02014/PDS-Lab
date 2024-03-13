#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    
    printf("Enter a string: ");
    gets(str1);
    int len = strlen(str1);
    int p = 1;
    for(int i = 0 ; i < len/2 ; i++){
       if(str1[i] != str1[len-i-1]){
           p = 0;
       }
    }
    if(p){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
    
    return 0;
}