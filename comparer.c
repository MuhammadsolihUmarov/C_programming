#include <stdio.h>

//Number comparer
int main()
{
    double num1, num2;
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    if (num1>num2)
    {
        printf("First number is greater!");
    }
    else 
    {
        printf("Second number is greater!");
    }
    return 0;
}