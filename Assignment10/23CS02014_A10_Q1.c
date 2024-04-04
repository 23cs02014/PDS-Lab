#include <stdio.h>

union Data
{
    int integer;
    float floating;
    char character;
};

int main()
{
    union Data data;

    data.integer = 97;
    printf("Integer value: %d\n", data.integer);
    printf("Float value: %.2f\n", data.floating);
    printf("Character value: %c\n", data.character);

    data.floating = 3.14;
    printf("\n");
    printf("Integer value: %d\n", data.integer);
    printf("Float value: %.2f\n", data.floating);
    printf("Character value: %c\n", data.character);

    data.character = 'A';
    printf("\n");
    printf("Integer value: %d\n", data.integer);
    printf("Float value: %.2f\n", data.floating);
    printf("Character value: %c\n", data.character);

    printf("\n");
    printf("Integer value: %d\n", data.integer);
    printf("Float value: %.2f\n", data.floating);
    printf("Character value: %c\n", data.character);

    return 0;
}