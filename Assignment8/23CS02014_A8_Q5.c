#include <stdio.h>

void rotateMatrix(int n, int mat[n][n])
{

    for (int i = 0; i < n; i++) // Transpose
    {
        for (int j = i; j < n; j++)
        {
            // int temp = mat[j][i];
            // mat[j][i] = mat[i][j];
            // mat[i][j] = temp;
            int t = *(*(mat + i) + j);
            *(*(mat + i) + j) = *(*(mat + j) + i);
            *(*(mat + j) + i) = t;
        }
    }

    for (int i = 0; i < n; i++) // Reverse
    {
        for (int j = 0, k = n - 1; j < k; j++, k--)
        {
            // int temp = mat[i][j];
            // mat[i][j] = mat[i][k];
            // mat[i][k] = temp;
            int t = *(*(mat + i) + j);
            *(*(mat + i) + j) = *(*(mat + i) + k);
            *(*(mat + i) + k) = t;
        }
    }
}

void rotateMatrixNTimes(int n, int mat[n][n], int times)
{
    for (int i = 0; i < times; i++)
    {
        rotateMatrix(n, mat);
    }
}
void printMatrix(int n, int mat[n][n])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}
int main()
{
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int times = 4;
    rotateMatrixNTimes(3, mat, times);
    printMatrix(3, mat);
    return 0;
}