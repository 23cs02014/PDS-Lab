#include <stdio.h>
#include <math.h>
#define pi 3.14
int main()
{
    int height, radius;

    printf("Enter Radius:");
    scanf("%d", &radius);
    printf("Enter Height:");
    scanf("%d", &height);
    float volume = pi * pow(radius, 2) * height;
    float surfaceArea = 2 * pi * radius * (radius + height);
    printf("Volume of Cylinder: %.2f\n", volume);
    printf("Surface Area of Cylinder: %.2f\n", surfaceArea);
    return 0;
}