#include<stdio.h>


/*Sum of odd and even digits calculator*/
int main()
{
    int curDigit;
    int num;
    int evenSum = 0, oddSum = 0;

    printf("Enter num: ");
    scanf("%d", &num);

    while(num>0)
    {
        curDigit = num % 10;
        if (curDigit) //if zero if is out
        {
            if (curDigit%2==0) //Current digit is even
            {
                evenSum += curDigit;
                printf("Even number: %d\n", curDigit);
            }
            else //it is odd
            {
                oddSum += curDigit;
                printf("Odd number: %d\n", curDigit);
            }
        }
        num = num / 10;
    }
    printf("Sum of odd digits: %d\nSum of even digits:%d\n%d - %d = %d", oddSum, evenSum, evenSum, oddSum, evenSum-oddSum);
}