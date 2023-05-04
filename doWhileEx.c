#include <stdio.h>


//Grade taker. Enter invalid grade to quit.
int main()
{
    int grade;
    do
    {
        printf("Please enter a grade: (Valid grade -> 0-100) ");
        scanf("%d", &grade);
    } while (grade<0 || grade>100);

    printf("Grade: %d \nThanks for entering valid grade", grade);
    return 0;
}