#include<stdio.h>

float areaCalulator(float height, float width)
/*Calculates area of the rectangle*/
{
    float area;
    area = height * width;
    return area;
}


int main()
{
    float num1, num2;
    printf("Enter the height of the rectangle: ");
    scanf("%f", &num1);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &num2);
    printf("Area of the given rectangle is: %.1f", areaCalulator(num1, num2));
    return 0;
}