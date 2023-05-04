#include<stdio.h>


void printfMinMax(int num1, int num2)
{
    if (num1<num2)
    {
        printf("Max: %d\n", num2);
        printf("Min: %d\n", num1);
    }
        
    else
    {
        printf("Max: %d\n", num1);
        printf("Min: %d\n", num2);
    }
    return 0;
}

int main()
{
    /*Max and min value finder among the entered values*/
    int num1, num2;
    printf("Enter number one: ");
    scanf("%d", &num1);
    printf("Enter number two: ");
    scanf("%d", &num2);
    printfMinMax(num1, num2);
    return 0;
}