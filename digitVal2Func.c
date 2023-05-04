#include<stdio.h>



void digitValueMaxPrinter(int num)
{
    int d1, d2, d3;
    d2 = num / 10;
    d1 = num -d2*10;
    //printf("%d %d %d", d1, d2, d3);
    if (num>100 || num<0)
        printf("Error! Not 2-digit positive number");
    else
    {
        if (d1>d2)
        {
            printf("Maximum digit: %d", d1);
        }
        else
        {
            printf("Maximum digit: %d", d2);
        }
    }
}


int main()
{
    /*Prints maximum digit*/
    int inp;
    printf("Enter a 2 digit positive number: ");
    scanf("%d", &inp);
    digitValueMaxPrinter(inp);
}