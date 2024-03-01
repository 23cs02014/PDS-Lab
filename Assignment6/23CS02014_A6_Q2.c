#include <stdio.h>
void avg(int x[], int size)
{
    float a = 0;
    for (int i = 0; i < size; i++)
    {
        a += x[i];
    }
    a = a / size;
    for (int i = 0; i < size; i++)
    {
        if (x[i] > a)
        {
            printf("%d ", x[i]);
        }
    }
}
int main()
{
    int n;
    printf("size of array:");
    scanf("%d", &n);
    int x[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d index value:", i);
        scanf("%d", &x[i]);
    }
    avg(x, n);
}