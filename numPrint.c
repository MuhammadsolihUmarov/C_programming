#include<stdio.h>


void printNumLengthTimes(int length)
{
    if (length<10)
    {
        for (int i = 1; i <= length; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = 1; i <= length; i++)
        {
            printf("%ld ", 9);
        }
    }
}

int main()
{
    /*Prints 1 to n for less than 10 numbers
    Prints 9s for more than 9 numbers*/
    int len;
    printf("Enter how many numbers I should print (less than 10 -> (starting from 1 to that n), more than 9 -> (only n times 9s)): ");
    scanf("%d", &len);
    printNumLengthTimes(len);
}