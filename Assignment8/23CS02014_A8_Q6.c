#include <stdio.h>

int main()
{
    int n1, n2;
    printf("Enter number of characters of first string: ");
    scanf("%d", &n1);
    char str1[n1];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter number of characters of second string: ");
    scanf("%d", &n2);
    char str2[n2];
    printf("Enter second string: ");
    scanf("%s", str2);
    char str3[n1 + n2];
    int i = 0, j = 0;
    while (i < n1)
    {
        *(str3 + i) = *(str1+i);
        i++;
    }
    while (j < n2)
    {
        *(str3+i) = *(str2+j);
        i++;
        j++;
    }
    printf("Concatenated string: ");
    for (int k = 0; k < n1 + n2; k++)
    {
        printf("%c", *(str3+k));
    }
    // printf("Concatenated string: %s",str3);
}