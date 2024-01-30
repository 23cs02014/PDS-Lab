#include<stdio.h>
#include<math.h>
int main(){
    printf("mealCost:");
    int mealCost;
    scanf("%d",&mealCost);
    printf("tipPercent:");
    int tipPercent;
    scanf("%d",&tipPercent);
    printf("taxPercent:");
    int taxPercent;
    scanf("%d",&taxPercent);
    float finalCost = mealCost + mealCost*tipPercent/100 + mealCost*taxPercent/100;
    int FinalRound = round(finalCost);
    printf("finalCost:%d",FinalRound);
    getch();
    return 0;
}