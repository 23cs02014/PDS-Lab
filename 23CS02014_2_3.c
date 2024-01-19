#include <stdio.h>

int main() {
    int days;
   printf("Days:");
   scanf("%d",&days);
   
    int years = days/365;
    int rest = days%365;
    int months = rest/30;
    rest = rest%30;
    int weeks = rest/7;
    int days1 = rest%7;
    
    printf("\nYears:%d",years);
    printf("\nMonths:%d",months);
    printf("\nWeeks:%d",weeks);
    printf("\nDays:%d",days1);
    return 0;
}