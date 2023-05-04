#include<stdio.h>


int main()
{
    /*Prints all numbers from 0 to teh entered number and to reach the entered number from zero*/
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int n=1; n <= num;n++)
    {
        printf("%d  ", n);
    }
    printf("\n");

    for (int n=1; n <= num;num--)
    {
        printf("%d  ", num);
    }

    return 0;
}