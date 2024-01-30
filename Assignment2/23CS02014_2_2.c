#include <stdio.h>

int main() {
    int a , b , c,max;
    printf("Input Numbers:");
    scanf("%d%d%d",&a,&b,&c);

    (a>b && a>c)?
    max = a: (b>a && b>c)?
                max = b: (c>a && c>b)?
                            max = c: printf("");


printf("Max:%d",max);

    return 0;
}