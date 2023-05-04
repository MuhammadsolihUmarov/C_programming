#include<stdio.h>


int main()
{
    /*Swapping without temporary variable*/
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Numbers before swapping: Number 1: %d and Number 2: %d\n", num1, num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("Numbers after swapping: Number 1: %d Number 2: %d\n", num1, num2);
}