#include<stdio.h>


int digitCounter(int num)
{
    if (num<=9)
    {
        return 1;
    }
    return 1 + digitCounter(num / 10);
}


//Counts digits of the number. Ex: 12345 input -> 5 output
int main()
{
    int input, output;
    printf("Enter a number: ");
    scanf("%d", &input);
    output = digitCounter(input);
    printf("Number of digits in the number %d is %d", input, output);
}