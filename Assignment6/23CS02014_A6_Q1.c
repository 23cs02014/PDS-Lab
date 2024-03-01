#include <stdio.h>
int isPrime(int n)
{
    int flag = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
        }
    }
    return flag;
}
int main()
{
    int lowerlimit, higherlimit;
    printf("Enter the lower limit: ");
    scanf("%d", &lowerlimit);
    printf("Enter the higher limit: ");
    scanf("%d", &higherlimit);
    printf("Prime numbers b/w %d & %d are:\n", lowerlimit, higherlimit);
    for (int i = lowerlimit; i <= higherlimit; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}