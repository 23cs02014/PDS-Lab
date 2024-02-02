#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 Numbers:");
    scanf("%d%d%d", &a, &b, &c);
    int greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Greatest:%d", greatest);
    return 0;
}