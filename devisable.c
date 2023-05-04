#include <stdio.h>

int main()
{
    /*Checks if the numbers are divisable by each other. 
    Ex: 3, 6, 12 -> true, 
    3, 4, 5 -> false*/
    int num1, num2, num3;
    printf("Enter three numbers with space in between to check their devisablity: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1==0 || num2==0 || num3==0)
    {
        printf("Not devisable by 0! Please enter only non-zero numbers");
    }

    else if ((num1%num2 == 0 || num2%num1 == 0) && (num3%num2 == 0 || num2%num3 == 0) && (num1%num3 == 0 || num3%num1 == 0))
    {
        printf("Divisable Numbers!");
    }
    else
    {
        printf("Not divisable numbers");
    }
}