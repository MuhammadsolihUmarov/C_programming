#include <stdio.h>

//Rectangle area calculator
int main()
{
    double height, width;
    double area;
    printf("Enter height: ");
    scanf("%lf", &height);
    printf("Enter width: ");
    scanf("%lf", &width);
    area = height * width;
    printf("Area %lf", area);
    return 0;
}
