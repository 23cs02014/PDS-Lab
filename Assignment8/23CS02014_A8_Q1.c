#include <stdio.h>

void Swap(int *q, int *w)
{
    int temp = *q;
    *q = *w;
    *w = temp;
}
void circleSwap(int *x, int *y, int *z)
{
    Swap(&*x, &*y);
    Swap(&*x, &*z);
}
int main()
{
    int a, b, c;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);
    printf("Before circle swap: a=%d b=%d c=%d\n", a, b, c);
    circleSwap(&a, &b, &c);
    printf("After circle swap: a=%d b=%d c=%d", a, b, c);
}