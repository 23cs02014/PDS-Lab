#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x;
    int a[4]; // array to store the digits
    printf("Enter the number: ");
    scanf("%d", &x);
    if (x > 9999 || x < 1000)
    {
        printf("Invalid input");
    }
    else
    {
        for (int i = 3; i >= 0; i--)
        {
            a[i] = x % 10;
            x = x / 10;
        }
        for (int e = 0; e < 4; e++)
        {
            for (int b = 0; b < 4; b++)
            {
                for (int c = 0; c < 4; c++)
                {
                    for (int d = 0; d < 4; d++)
                    {
                        if (!(a[e] == a[b] || a[e] == a[c] || a[e] == a[d] || a[b] == a[c] || a[b] == a[d] || a[c] == a[d]))
                            printf("%d%d%d%d\n", a[e], a[b], a[c], a[d]);
                    }
                }
            }
        }
    }
    return 0;
}