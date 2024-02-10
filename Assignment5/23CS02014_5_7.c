#include <stdio.h>
void swap(int x, int y)
{
}
int main()
{
    int a[10] = {5, 3, 1, 4, 6, 0, -1, 3, 2, 5};
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int k = 0; k < 10; k++)
    {
        printf("%d ", a[k]);
    }
} // bubble sort,permutation,change code for q6,frequency array