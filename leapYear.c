#include <stdio.h>

//Leap year calculator
//Leap year can be divided by 4 and if it is more than 400, it should be divisable by 400 as well.
int main()
{
    int year, leapYear, reason;
    leapYear = 0;
    printf("Enter a year to know if it is a leap year: ");
    scanf("%d", &year);
    if (year%400==0)
    {
        leapYear = 1;
        reason = 400;
    }
    else if (year% 100==0)
    {
        leapYear = 0;
        reason = 400;
    }
    else if (year%4==0)
    {
        leapYear = 1;
        reason = 4;
    }
    else 
    {
        leapYear = 0;
        reason = 4;
    }


    if (leapYear==1)
    {
        printf("%d is a leap year as it is divisible by %d", year, reason);
    }
    else
    {
        printf("%d is not a leap year as it is not divisible by %d", year, reason);
    }
}