#include <stdio.h>


//Decimal to Hexadecimal converter
int main()
{
    int day, month, year;
    printf("I will print the integer format given in the day, month and year in hexadecimal format!\n");
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    printf("%d %d %d in hex is 0x%X 0x%X 0x%X", day, month, year, day, month, year);
}