#include <stdio.h>

int main()
{
    /*Detemines number's type (negative, positive, 0)*/
    int num;
    printf("Enter a number to know its type (negative, positive, neutural): ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("0");
    }
    else if (num > 0)
    {
        printf("1");
    }
    else
    {
        printf("-1");
    }
}