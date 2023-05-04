#include<stdio.h>


int isOdd(int num)
{
    if (num%2==1)
        return 1;
    return 0;
}


int sumDigitCalc(int num)
{
    int sum, currentDigit;
    if (num==0)
        return 0;
    currentDigit = num % 10;
    sum = currentDigit + sumDigitCalc(num / 10);
    return sum;
}


int main()
{
    /*Determines the sum of digits and prints whether it is odd or even*/
    int input, output;
    printf("Please enter a number: ");
    scanf("%d", &input);
    if (input<0)
    {
        printf("Only enter positive number!");
        return 1;
    }
    output = isOdd(sumDigitCalc(input));
    if (output==1)
        printf("The sum of digits in the number %d is odd", input);
    else
        printf("The sum of digits in the number %d is even", input);

    return 0;
}