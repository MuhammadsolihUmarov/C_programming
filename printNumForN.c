#include<stdio.h>


int printer(int num1, int num2, int total)
{
    if (total>0)
    {
        printf("%d", num1);
        printer(num1, num2, total-1);
        printf("%d", num2);
    }
}

int main()
{
    /*Prints certain numbers for specified number of times*/
    int inp1, inp2, total;
    printf("Please enter the first number: ");
    scanf("%d", &inp1);
    printf("Please enter the second number: ");
    scanf("%d", &inp2);
    printf("Please enter how many times I should print them: ");
    scanf("%d", &total);
    printer(inp1, inp2, total);
}