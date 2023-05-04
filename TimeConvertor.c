#include <stdio.h>

//Second to hours:minutes:seconds calculator
int main()
{
    int seconds, hours, minutes, second;
    //seconds = 4000;
    printf("How many seconds should I convert? ");
    scanf("%d", &seconds);
    hours = seconds / 3600;
    minutes = (seconds - hours * 3600) / 60;
    second = seconds - hours*3600 - minutes*60;
    printf("%d seconds = %d hours %d minutes %d seconds", seconds, hours, minutes, second);
    return 0;
}