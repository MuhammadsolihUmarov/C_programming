#include<stdio.h>


#define SIZE 3


//Copying entered dates using Pointers
int main()
{
    int date1[SIZE], *date2;
    int day, month, year;

    printf("Enter today's date: ");
    scanf("%d", &day);

    printf("Enter current month: ");
    scanf("%d", &month);

    printf("Enter current year: ");
    scanf("%d", &year);

    date1[0] = day;
    date1[1] = month;
    date1[2] = year;

    printf("Date 1: %d:%d:%d\n", date1[0], date1[1], date1[2]);

    //Setting the memory location of date1 to date2
    date2 = date1;
    for (int i = 0; i < SIZE;i++)
    {
        *(date2 + i) = *(date1 + i);
    }

    printf("Date 2 (copy of Date 1): %d:%d:%d\n", date2[0], date2[1], date2[2]);
}