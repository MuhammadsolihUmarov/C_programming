#include<stdio.h>


int isEven(int num)
{
    if (num==0)
        return 0;
    if(num%2==0)
        return 1;
    return 0;
}


int isDigitIndexSame(int num, int index)
{
    int flag=1;
    int currentDigit;
    if (num==0)
    {
        return flag;
    }
    currentDigit = num % 10;
    if (isEven(currentDigit) != isEven(index))
    {
        flag = 0;
        return flag;
    }
    return isDigitIndexSame(num / 10, index + 1);
}

int main()
{
    /*Compares digit and indeces types. Index 0 = Even, Index 1 = odd value. Ex Index 1 should have odd value while 0 should have even value*/
    int input=1235, index=0, output;
    printf("Enter a number: ");
    scanf("%d", &input);
    output = isDigitIndexSame(input, index);
    if (output==1)
        printf("In the number: %d digits and indeces are the same type!", input);
    else
        printf("In the number: %d digits and indeces are NOT the same type!", input);
}