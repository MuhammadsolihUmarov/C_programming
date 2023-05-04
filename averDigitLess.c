#include<stdio.h>


int comparer(int num, int digit)
{
    int counter = 0, total=0, tempDigit, finalNum;
    finalNum = num;
    if (num<0)
    {
        num *= (-1);
    }
    
    while(num>0)
    {
        tempDigit = num % 10;
        //printf("First %d\n", tempDigit);
        if (tempDigit<digit)
        {
            //printf("%d<%d\n", num, tempDigit);
            counter++;
            total += tempDigit;
        }
        num = num / 10;
    }
    //printf("%d", total);
    printf("Average of numbers less than %d is %d\n", digit, total / counter);
    return counter;
}

//Number of digits less than certain number and their average calculator 
int main()
{
    int inp, digit;
    float result;
    printf("Welcome to the game where you can set the number and limiting number, each digit less than limiting number will be considered and average/number of occurences will be printed\n");
    printf("Enter a number: ");
    scanf("%d", &inp);
    printf("Enter a limiting number: ");
    scanf("%d", &digit);
    result = comparer(inp, digit);
    printf("Total numbers less than %d: %.1f", digit, result);
    return 0;
}