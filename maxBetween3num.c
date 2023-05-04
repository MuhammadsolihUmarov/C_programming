#include<stdio.h>


int maxBetween3Num()
{
    int num1, num2, num3, max;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    if (num1>num2 && num1>num3)
        max = num1;

    else if (num2>num3 && num2>num1)
        max = num2;
    else
        max = num3;

    return max;
}

int main()
{
    /*Max value finder among 3 values*/
    int val;
    printf("Maximum among these values is %d", maxBetween3Num());
}