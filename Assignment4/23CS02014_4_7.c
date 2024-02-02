#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age:");
    scanf("%d", &age);
    if (age < 5)
    {
        printf("Ticket cost:0");
    }
    else if (age >= 5 && age <= 12)
    {
        printf("Ticket cost:20");
    }
    else if (age > 10 && age <= 60)
    {
        printf("Ticket cost:50");
    }
    else
    {
        printf("Ticket cost:%0.f", 50 * 0.8);
    }
    return 0;
}