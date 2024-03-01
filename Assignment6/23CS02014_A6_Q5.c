#include <stdio.h>
int main()
{
    printf("Enter no of rows:");
    int rows;
    scanf("%d", &rows);
    printf("Enter no of columns:");
    int columns;
    scanf("%d", &columns);
    int m[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("enter %d row %d column value:", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    printf("before swap:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    int m1[columns][rows];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {

            m1[j][i] = m[i][j];
        }
    }

    printf("after swap:\n");
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", m1[i][j]);
        }
        printf("\n");
    }
}