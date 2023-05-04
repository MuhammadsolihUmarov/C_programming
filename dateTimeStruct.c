#include<stdio.h>


//Takes and prints date and time using structs
struct time 
{
    int seconds;
    int minutes;
    int hours;
};

struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct time currentTime;
    struct date currentDate;
    printf("Enter the current year: ");
    scanf("%d", &currentDate.year);
    printf("Enter the current month number: ");
    scanf("%d", &currentDate.month);
    printf("Enter the current day: ");
    scanf("%d", &currentDate.day);
    printf("Enter what time is it? (in hh mm ss format, ex: 13 hours 10 minutes 10 seconds should be entered as '13 10 10') ");
    scanf("%d %d %d", &currentTime.hours, &currentTime.minutes, &currentTime.seconds);
    printf("Current date and time is %d.%d.%d  %d:%d:%d", currentDate.day, currentDate.month, currentDate.year, currentTime.hours, currentTime.minutes, currentTime.seconds);

}