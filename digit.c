#include <stdio.h>

/*
int invalid()
{
    printf("Neither double or triple");
}
*/

//Digit calculator for double(99) and triple(999) digit numbers
int main()
{
    int num;
    printf("Type a number to know its digits: (it is for only double and triple digits) ");
    scanf("%d", &num);
    if (num < 100 && num > 9)
    {
        printf("Double digit");
    }
    else if (num > 99 && num < 1000)
    {
        printf("Triple digit");
    }
    else 
    {
        printf("Invalid value (should be in the range of 10 and 1000)");
    }
    return 0;
}