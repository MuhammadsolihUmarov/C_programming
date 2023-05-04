#include <stdio.h>

//Birth year calculator by your current age and the current year
int main()
{
    int age;
    int year;
    printf("Your age: ");
    scanf("%d", &age);
    printf("Current year: ");
    scanf("%d", &year);
    printf("Your birth year: %d", year - age);
    return 0;
}