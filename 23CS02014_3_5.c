#include<stdio.h>
int main(){
    printf("Enter Late Days:");
    int lateDays;
    scanf("%d",&lateDays);
    if(lateDays<=5){
        printf("Fine is Rs. 1");
    }
    else if(lateDays<=10){
        printf("Fine is Rs. 2");
    }
    else if(lateDays<=30){
        printf("Fine is Rs. 5");
    }
    else{
        printf("Your Membership is cancelled");
    }
}