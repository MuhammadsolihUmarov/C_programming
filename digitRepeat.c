#include<stdio.h>

int digitOccurance(int num, int digit)
{
    int ans;
    int rep = 0;
    int curDigit;
    if (num==0)
    {
        return 0;
    }
    curDigit = num % 10;
    if (curDigit==digit)
        rep++;
    ans = rep + digitOccurance(num / 10, digit);
    return ans;
}

int main()
{
    /*Checks how many time certain digit was repeated in a number*/
    int inputNum = 123452, inputDigit = 2, output;
    printf("Enter a number: ");
    scanf("%d", &inputNum);
    printf("Enter a number to search: ");
    scanf("%d", &inputDigit);
    output = digitOccurance(inputNum, inputDigit);
    printf("%d is repeated %d times in %d", inputDigit, output, inputNum);
}