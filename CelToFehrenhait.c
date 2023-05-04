#include <stdint.h>

//Celcius and Fehranhait calculator
int main()
{
    double Celsius, Fehrenhait;
    printf("Enter Celsius value to convert it to Fehrenhait: ");
    scanf("%lf", &Celsius);
    Fehrenhait = Celsius * 1.8 + 32;
    printf("%lf celsius in Fehranhait is %lf", Celsius, Fehrenhait);
}