#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter Number:");
    scanf("%d", &a);
    if (a >= 100 && a <= 999)
    {
        int b = pow(a / 100, 3) /*Hundereds place*/ + pow((a / 10) % 10, 3) /*Tens place*/ + pow(a % 10, 3) /*units place*/;
        if (b == a)
        {
            printf("Armstrong Number");
        }
        else
        {
            printf("Not Armstrong Number");
        }
    }
    else
    {
        printf("incorrect input");
    }
    return 0;
}