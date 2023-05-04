#include <stdio.h>


//Calculating the power of a number in more efficient way
int main()
{
    double x, x2, x4, x6, x8;
    //x=2
    printf("Please give x value to calulate its value in the power of 2, 4, 6, 8: ");
    scanf("%lf", &x);
    x2 = x * x;
    x4 = x2 * x2;
    x6 = x4 * x2;
    x8 = x4 * x4;
    printf("X: %.2lf. X2: %.2lf, X4: %.2lf, X6: %.2lf, X8: %.2lf", x, x2, x4, x6, x8);
    return 0;
}