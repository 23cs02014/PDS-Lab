#include <stdio.h>

void printDuplicates(int *nums, int n)
{
    int flag;
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (*(nums + i) == *(nums + j))
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d ", *(nums + i));
        }
    }
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 5, 6};
    int n = sizeof(nums) / sizeof(nums[0]);
    printDuplicates(nums, n);
    return 0;
}