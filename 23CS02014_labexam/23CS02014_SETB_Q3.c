#include <stdio.h>
#include <math.h>
int main()
{
    float centerx, centery, radius, x, y;
    printf("Enter Center of Circle (x,y):");
    scanf("%f%f", &centerx, &centery);
    printf("Enter Radius of Circle:");
    scanf("%f", &radius);
    printf("Enter point (x1,y1):");
    scanf("%f%f", &x, &y);
    float check = pow((x - centerx), 2) + pow((y - centery), 2) - pow(radius, 2);
    if (check < 0)
    {
        printf("Point lies inside the circle\n");
    }
    else if (check == 0)
    {
        printf("Point lies on the circle\n");
    }
    else
    {
        printf("Point lies outside the circle\n");
    }
    return 0;
}