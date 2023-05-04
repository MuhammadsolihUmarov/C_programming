#include <stdint.h>

//Finding sum of values
int main()
{
    //sum of arithmetic sequance is used: (a1+an)*n/2
    float a1, n, an, sum;
    printf("Type beginning of 'a' value: ");
    scanf("%f", &a1);
    printf("Type total number of values: ");
    scanf("%f", &n);
    printf("Type final value: ");
    scanf("%f", &an);
    sum = (a1 + an) * n / 2;
    printf("Sum of all values in these sequance is %f", sum);
}