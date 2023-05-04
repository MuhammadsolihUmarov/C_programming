#include <stdio.h>


//Checks if the 3 taken input decimal numbers are equal
int main()
{
    int num1, num2, num3;
    printf("Enter whole number to each space\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Number 3: ");
    scanf("%d", &num3);
    if (num1==num2 && num1==num3)
    {
        printf("EQUAL");
    }
    else
    {
        printf("NOT EQUAL");
    }
}