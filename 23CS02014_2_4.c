#include<stdio.h>
int main(){
    int year;
    printf("year:");
    scanf("%d",&year);
    (year%4 != 0)?
        printf("\nNot a leap year"):
        printf("\nit is a leap year");
    return 0;
}