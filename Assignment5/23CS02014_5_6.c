#include <stdio.h>
int main()
{
    char c[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y'};
    char input[50];
    printf("Enter the string:");
    scanf(" %s", &input);
    int count = 0, flag = 0;
    while (input[count] != '\0')
    {
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (input[i] == c[j])
            {
                flag++;
            }
        }
    }
    if (flag == 1)
    {
        printf("Can be made\n");
    }
    else
    {
        printf("Cant be made\n");
    }

    return 0;
}