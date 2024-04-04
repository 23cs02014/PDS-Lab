#include <stdio.h>

union Data
{
    int intArray[5];
    float floatArray[5];
    char charArray[5];
};

int main()
{
    union Data data;

    // for int array
    printf("Enter 5 integer values: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (data.intArray + i));
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c ", data.charArray[i]);
    // }
    printf("Integer Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(data.intArray + i));
    }
    printf("\n");

    // for float array
    printf("Enter 5 float values: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%f", (data.floatArray + i));
    }

    printf("Float Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f ", *(data.floatArray + i));
    }
    printf("\n");

    // for char array
    printf("Enter 5 char values: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf(" %c", (data.charArray + i));
    }

    printf("Character Array: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c ", data.charArray[i]);
    // }
    *(data.charArray+5) = '\0';
    printf("%s",data.charArray);
    printf("\n");

    return 0;
}