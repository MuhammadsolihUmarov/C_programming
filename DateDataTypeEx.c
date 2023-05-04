#include<stdio.h>

typedef struct date {
    int day;
    int month;
    int year;
}
Date;

void DatePrinter(Date dt)
{
    printf("Year = %d, Month = %d, Day = %d\n", dt.year, dt.month, dt.day);
}

Date inputDate()
{
    Date dt;
    printf("Enter day (1-31): ");
    scanf("%d", &dt.day);
    printf("Enter month(1-12): ");
    scanf("%d", &dt.month);
    printf("Enter year: ");
    scanf("%d", &dt.year);
    DatePrinter(dt); // only accepts Date data type
    return dt;
}

int main()
{
    inputDate();
}