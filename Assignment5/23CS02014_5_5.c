#include <stdio.h>
int main()
{
    int input, sum = 0;
    char c;
t1:
    printf("Provide the number:");
    scanf("%d", &input);
    if (input % 2 == 0)
    {
        sum = sum + input;
    }
t2:
    printf("Do you want to continue?:");
    scanf(" %c", &c);
    if (c == 'Y' || c == 'y')
    {
        goto t1;
    }
    else if (c == 'N' || c == 'n')
    {
        printf("Sum: %d", sum);
    }
    else
    {
        printf("Invalid input\n");
        goto t2;
    }

    return 0;
}