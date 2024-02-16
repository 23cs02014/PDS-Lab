#include <stdio.h>
int sumOfDivisors(int n)
{
    int sum = 1;
    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}
int main()
{
    int lower, upper;
    printf("Input Lower Limit:");
    scanf("%d", &lower);
    printf("Input Lower Upper:");
    scanf("%d", &upper);
    printf("Perfect Numbers:");
    for (int i = lower; i <= upper; i++)
    {
        if (sumOfDivisors(i) == i && i != 1)
        {
            printf("%d ", i);
        }
    }
}