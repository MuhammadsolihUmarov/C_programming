#include <stdio.h>

//Float extractor
int main()
{
    double num;
    int int_n;
    float float_n;
    printf("Enter a number to get to know its float value:    ");
    scanf("%lf", &num);
    //num = 1.4;
    int_n = (int)num;
    float_n = num - int_n;
    printf("Float part of the entered number: %.4f", float_n);
    return 0;
}