#include <stdio.h>


int main()
{
    /*Takes 3 digit number and determines if it is ascending(1 > 2 > 3) or not (2 > 1 < 3)*/
    int num, hundereds, tens, ones;
    printf("Please enter 3-digit number: ");
    scanf("%d", &num);
    hundereds = num / 100;
    tens = num / 10 - hundereds*10;
    ones = num % 10;
    if (hundereds<tens && tens<ones)
    {
        printf("ASCENDING (%d<%d<%d)", hundereds, tens, ones);
    }
    else
    {
        printf("NOT ASCENDING");
    }
}