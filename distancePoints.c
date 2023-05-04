#include <stdio.h>
#include <math.h>

//Distance between the points calculator
int main()
{
    float x1, x2, y1, y2, distance;
    //x1=10, x2=10, y1=2, y2=8
    printf("X1: ");
    scanf("%f", &x1);
    printf("X2: ");
    scanf("%f", &x2);
    printf("Y1: ");
    scanf("%f", &y1);
    printf("Y2: ");
    scanf("%f", &y2);

    distance = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
    printf("%.1lf", distance);
    printf("Distance between the points (%.2f, %.2f) and (%.2f, %.2f) is %.2f \n", x1, y1, x2, y2, distance);
    return 0;
}