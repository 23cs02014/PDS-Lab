#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    
    printf("Enter a string: ");
    gets(str1);
    int len = strlen(str1);
    for(int i=0; i<len; i++){
        if((str1[i] >= 65 && str1[i] <= 90) || (str1[i] >= 97 && str1[i] <= 122)){
            printf("%c", str1[i]);
        }
    }
    
    return 0;
}