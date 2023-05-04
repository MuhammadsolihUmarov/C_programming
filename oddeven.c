#include <stdio.h>

int main()
{
    /*Odd or Even calculator*/
    int num;
    printf("Enter the number to know whether it is odd or even: ");
    scanf("%i", &num);
    if (num%2==0)
    {
        printf("%d is even!", num);
    }
    else
    {
        printf("%d is not even!", num);
    }
}