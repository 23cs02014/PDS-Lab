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
    int a[2][y];
    for (int i = 0; i < y; i++)
    {
        a[0][i] = i + 1;
        a[1][i] = x - (i + 1);
        if (!(primeChecker(a[0][i]) || primeChecker(a[1][i])) && (a[0][i] != a[1][i])) // This extra line of (a[0][j]!=a[1][j]) will make sure the output has distinct numbers
            printf("%d %d\n", a[0][i], a[1][i]);
    }
    return 0;
}