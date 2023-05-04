#include <stdio.h>

int main()
{
    /*Maximum and minimum number printer*/
    double num1, num2;
    printf("First number: ");
    scanf("%lf", &num1);
    printf("Second num: ");
    scanf("%lf", &num2);
    if (num1>num2)
    {
        printf("%.1lf is maximum \n", num1);
        printf("%.1lf is minimum", num2);
    }
    else
    {
        printf("%.1lf is maximum \n", num2);
        printf("%.1lf is minimum", num1);
    }
}