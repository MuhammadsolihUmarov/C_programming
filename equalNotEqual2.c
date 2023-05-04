#include <stdio.h>


//Checks if the 2 taken input decimal numbers are equal
int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 == num2)
    {
        printf("EQUAL");
    }
    else 
    {
        printf("NOT EQUAL");
    }
}