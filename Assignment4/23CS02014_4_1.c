#include <stdio.h>
int main()
{
    int x;
    printf("Enter Number:");
    scanf("%d", &x);
    x = x % 2;
    switch (x)
    {
    case 0:
        printf("Even Number");
        break;

    default:
        printf("Odd Number");
        break;
    }
    return 0;
}