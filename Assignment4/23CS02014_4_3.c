#include <stdio.h>
int main()
{
    int creditScore, currentBalance;
    float intrestRate;
    printf("Enter Credit Score and Current Balance:");
    scanf("%d%d", &creditScore, &currentBalance);
    if (creditScore < 600)
    {
        intrestRate = 0.15;
    }
    else if (creditScore < 750 && creditScore >= 600)
    {
        intrestRate = 0.12;
    }
    else if (creditScore >= 750)
    {
        intrestRate = 0.10;
    }
    printf("Calculated Intrest=%.0f", currentBalance * intrestRate);

    return 0;
}