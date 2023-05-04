#include <stdio.h>


int main()
{
    /*Takes today's date and calculates tomorrow's date using switch case*/
    int year, month, day;
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter day: ");
    scanf("%d", &day);

    int leapYear = 0;

    if (month==2)
    {
        if (year%4==0 && (year%100!=100 || year==400))
        {
            leapYear = 1;
            printf("Leap year\n");
        }
    }
    day += 1; //We will add 1 to know what date is tomorrow

    switch(month) //We seperated 31 days and february depending on whether or not it is leap year. We adjusted its days in a month
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        if (day<=31)
        {
            month += 1;
            day = 1;
            break;
        }
        case 2:
        if (day>29 && leapYear ==1)
        {
            day = 1;
            month += 1;
            break;
        }
        if (day>28 && leapYear ==0)
        {
            day = 1;
            month += 1;
            break;
        }
        
        
    }
    if (month>=13)
    {
        month = 1;
        year += 1;
    }
    printf("The next day is %d %d %d", day, month, year);
    return 0;
}