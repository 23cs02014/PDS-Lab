#include <stdio.h>
void printMatrix(int rows, int col, int arr[rows][col])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
}
void multiplyMatrix(int row1, int col1, int arr1[row1][col1], int row2, int col2, int arr2[row2][col2], int result[row1][col2])
{
    if (col1 != row2)
    {
        printf("Matrix multiplication not possible");
        return;
    }

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            *(*(result + i) + j) = 0;
            for (int k = 0; k < col1; k++)
            {
                // result[i][j] += (arr1[i][k]) * (arr2[k][j]);
                *(*(result + i) + j) += *(*(arr1 + i) + k) * *(*(arr2 + k) + j);
            }
        }
    }
}
int main()
{
    int row1, col1;
    printf("Enter the number of rows and columns for arr1:");
    scanf("%d %d", &row1, &col1);
    int arr1[row1][col1];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", *(arr1 + i) + j);
        }
    }
    printf("Matrix 1:\n");
    printMatrix(row1, col1, arr1);
    int row2, col2;
    printf("Enter the number of rows and columns for arr2:");
    scanf("%d %d", &row2, &col2);
    int arr2[row2][col2];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            scanf("%d", *(arr2 + i) + j);
        }
    }
    printf("Matrix 2:\n");
    printMatrix(row2, col2, arr2);
    printf("Resultant matrix:\n");
    int r[row1][col2];
    multiplyMatrix(row1, col1, arr1, row2, col2, arr2, r);
    printMatrix(row1, col2, r);
    return 0;
}