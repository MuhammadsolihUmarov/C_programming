#include <stdio.h>

//Distance between cities calculator
int main()
{
    double dis, speed;
    int hours, minutes;
    printf("How far is the city you are going to? (km) ");
    scanf("%lf", &dis);
    printf("What is your speed? (km/hour) ");
    scanf("%lf", &speed);
    hours = (int)(dis / speed);
    float speed_min = speed / 60;
    minutes = (int)((dis / speed - hours) * 60);
    printf("It takes about %d hours and %d minutes for reaching the city", hours, minutes);
    return 0;
}
