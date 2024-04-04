#include <stdio.h>

struct MyStruct
{
    int x;
    int y;
    char c;
};

union MyUnion
{
    int x;
    int y;
    char c;
};

int main()
{
    struct MyStruct myStruct;
    union MyUnion myUnion;

    printf("Size of struct: %zu bytes\n", sizeof(myStruct)); // int + int + char = 12 bytes
    printf("Size of union: %zu bytes\n", sizeof(myUnion));   // int = int = char = 4 bytes

    return 0;
}