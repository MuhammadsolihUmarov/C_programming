#include<stdio.h>


void printOneToNandNtoOne(int num) //num=3
{
    if (num==1)
    {
        printf("%d  ", num); //3rd = 1
    }
    else
    {
        printf("%d  ", num); //1st = 3
        printOneToNandNtoOne(num - 1); //2nd = 2 
        printf("%d  ", num); //4th and 5th = 2 3
    }
}

int main()
{
    int input, output;
    printf("Please enter a number: ");
    scanf("%d", &input);
    printOneToNandNtoOne(input);
}