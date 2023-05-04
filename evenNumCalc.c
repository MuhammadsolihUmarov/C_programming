#include<stdio.h>

int evenSum()
{
    int num, sum;
    printf("Please enter a number: (-1 to quit) ");
    scanf("%d", &num);
    if (num==-1)
        return 0;
    if (num%2==0)
        return sum = num + evenSum();
    return evenSum();
}

int main()
{
    /*Calculates sum of even numbers entered*/
    int output;
    output = evenSum();
    printf("Sum of even numbers you entered: %d", output);
}