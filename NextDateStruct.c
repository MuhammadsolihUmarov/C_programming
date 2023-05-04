#include<stdio.h>

/*Takes today's date and calculates tomorrow's date using structs*/
typedef struct date
{
    int year;
    int month;
    int day;
} Date;


void printDateTomorrow(Date dt)
{
    printf("Tomorrow will be Year = %d, Month = %d, Day = %d\n", dt.year, dt.month, dt.day);
}


void printDateToday(Date dt)
{
    printf("Today is Year = %d, Month = %d, Day = %d\n", dt.year, dt.month, dt.day);
}


Date addOne(Date dt)
{
    Date CurrentPlusOne;
    CurrentPlusOne = dt;
    CurrentPlusOne.day++;
    if (CurrentPlusOne.day>31)
    {
        CurrentPlusOne.day = 1;
        CurrentPlusOne.month++;
        if (CurrentPlusOne.month>12)
        {
            CurrentPlusOne.month = 1;
            CurrentPlusOne.year++;
        }
    }
    return CurrentPlusOne;
}


Date inputDate()
{
    Date dt;
    printf("Enter year: ");
    scanf("%d", &dt.year);
    printf("Enter month: ");
    scanf("%d", &dt.month);
    printf("Enter day: ");
    scanf("%d", &dt.day);
    return dt;
}


int main()
{
    Date output;
    output = inputDate();
    printDateToday(output);
    output = addOne(output);
    printDateTomorrow(output);
}
