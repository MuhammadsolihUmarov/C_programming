#include <stdio.h>

//Perimeter calculator
int main()
{
    double height, width;
    double perimeter;
    printf("Height: ");
    scanf("%lf", &height);
    printf("Width: ");
    scanf("%lf", &width);
    perimeter = height * 2 + width * 2;
    printf("Peremeter %lf", perimeter);
}