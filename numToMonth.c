#include <stdio.h>



int main()
{
    /*Takes the month digit and prints the month's corresponding value*/
    int num;
    printf("Enter a month number: ");
    scanf("%d", &num);
    switch(num)
    {
        case 1:
            printf("January");
            break;
        case 2:
            printf("February");
            break;
        case 3:
            printf("March ");
            break;
        case 4:
            printf("April");
            break;
        case 5:
            printf("May");
            break;
        case 6:
            printf("June");
            break;
        case 7:
            printf("July");
            break;
        case 8:
            printf("August");
            break;
        case 9:
            printf("Sepetember");
            break;
        case 10:
            printf("October");
            break;
        case 11:
            printf("November");
            break;
        case 12:
            printf("December");
            break;
        default:
            printf("Invalid value. We have only 12 months");
            break;
    }

}