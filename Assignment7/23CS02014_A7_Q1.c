#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2;
    printf("Enter a string: ");
    gets(str1);
    printf("Enter another char to find frequency: ");
    scanf("%c", &str2);
    int len1 = strlen(str1);
    int count = 0;
    for(int i=0; i<len1; i++){
        if(str1[i] == str2){
            count++;
        }
    }
    printf("Frequency of %c in %s is: %d", str2, str1, count);

   
    return 0;
}