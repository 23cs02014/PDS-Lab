#include <stdio.h>
int main()
{
    int a, b;
    char op;
    printf("Enter 2 Numbers:");
    scanf("%d%d", &a, &b);
    printf("Enter Operator:");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("Sum:%d", a + b);
        break;
    case '-':
        printf("Difference:%d", a - b);
        break;
    case '*':
        printf("Product:%d", a * b);
        break;
    case '/':
        printf("Quotient:%d", a / b);
        break;
    default:
        printf("Invalid Operator");
        break;
    }
    return 0;
}