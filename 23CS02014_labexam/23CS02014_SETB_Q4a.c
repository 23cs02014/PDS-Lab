#include <stdio.h>
int primeChecker(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d", &x);
    int y = x / 2;
    for (int i = 0; i < y; i++)
    {
        if (!(primeChecker(i + 1) || primeChecker(x - (i + 1)))) // This program will print non-distinct numbers too
            printf("%d %d\n", i + 1, x - (i + 1));
    }

    return 0;
}
