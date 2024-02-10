#include <stdio.h>
#include <math.h>
int main()
{
    int x, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &x);
    int dig = floor(log10(x) + 1); // no of digits
    int a[dig];
    for (int i = 0; i < dig; i++) // splitting into array
    {
        a[i] = x % 10;
        x = x / 10;
    }
    for (int j = 0; j < dig - 1; j++) // checking for duplicates
    {
        for (int k = j + 1; k < dig; k++)
        {
            if (a[j] == a[k])
            {
                a[k] = 0;
            }
        }
    }

    for (int l = 0; l < dig; l++) // sum of digits
    {
        sum = sum + a[l];
    }
    printf("digits:%d\n", dig);
    printf("sum:%d", sum);
    return 0;
}