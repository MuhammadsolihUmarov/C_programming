#include <stdio.h>


int printer(seconds, minutes, hours)
{
    if (hours<10)
    {
        printf("0");
    }
    printf("%d:", hours);
    
    if (minutes<10)
    {
        printf("0");
    }
    printf("%d:", minutes);

    if (seconds<10)
    {
        printf("0");
    }
    printf("%d", seconds);

    return 0;
}


int main()
{
    /*Takes seconds and prints them in data format*/
    int seconds, hours, minutes, input;
    printf("Enter seconds to convert them to data format: ");
    scanf("%d", &input);
    hours = input / 3600;
    minutes = input / 60 - hours*60;
    seconds = input - hours*3600 - minutes * 60;
    printer(seconds, minutes, hours);
    
    return 0;
}