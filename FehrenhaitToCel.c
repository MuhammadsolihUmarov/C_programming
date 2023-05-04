#include <stdio.h>

//C = (F-32) / 1.8
//Fehrenhait to Celcius calculator
int main()
{
    double Fehrenhait, Celsius;
    printf("Enter Fehrenhait value to convert it to Celsius: ");
    scanf("%lf", &Fehrenhait);
    Celsius = (Fehrenhait - 32) / 1.8;
    printf("%lf Fehranhait in Celsius is %lf", Fehrenhait, Celsius);
}