#include <stdio.h>
int main()
{
    int dividend, divisor, quotient = 0, remainder;
    printf("Enter the dividend: ");
    scanf("%d", &dividend);
    printf("Enter the divisor: ");
    scanf("%d", &divisor);
    while (dividend >= divisor)
    {
        dividend = dividend - divisor;
        quotient++;
    }
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d", dividend);
    return 0;
}