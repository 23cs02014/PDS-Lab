#include<stdio.h>
int main(){
    int num;
    printf("Number:");
    scanf("%d", &num);
     (num & 1 != 0 && num>=100 && num<=200) ? 
        printf("True"):
        printf("False");
    
    
    return 0;
}