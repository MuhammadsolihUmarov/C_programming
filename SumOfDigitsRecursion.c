#include<stdio.h>

int isEven(int num)
{
    if (num%2==0)
        return 1;
    else
        return 0;
}


int Sum(int num)
{
    int currentDigit, sum;
    
    currentDigit = num % 10;
    if (currentDigit==0)
        return 0;
    //Recursion starts
    sum = currentDigit + Sum(num / 10);
    return sum;
}

int OptimizedCalc(int num)
{
    if (num%2<10)
        return num % 2 ? 0 : 1;
    return num % 10 % 2 ? !OptimizedCalc(num / 10) : OptimizedCalc(num / 10);
}


int main()
{
    /*Calculates sum of digits of the given number and determines if sum is even or odd*/
    int input=1234, output, outputOpt;
    printf("Enter a number: ");
    scanf("%d", &input);
    output = isEven(Sum(input));
    outputOpt = OptimizedCalc(input);
    //printf("%d", output);
    if (output==1)
    {
        printf("Sum of digits of the number %d is even\n", input);
    }
    
    else
    {
        printf("Sum of digits of the number %d is odd\n", input);
    }
}