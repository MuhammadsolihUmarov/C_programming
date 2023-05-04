#include<stdio.h>


int sumDigitCalc(int num)
{
    int currentNum, nextNum;
    currentNum = num % 10;
    nextNum = num / 10;
    if (nextNum!=0)
        currentNum = currentNum + sumDigitCalc(nextNum);
    return currentNum;
}

int main()
{
    /*Calculates the sum of digits of the entered number*/
    int input, output;
    printf("Please enter a number: ");
    scanf("%d", &input);
    output = sumDigitCalc(input);
    printf("Sum of digits of the number %d is %d", input, output);
}