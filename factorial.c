#include<stdio.h>


/*Factorial printer. HAS LIMITATIONS FOR HIGH NUMBERS*/
int factorial(int num)
{
    if (num<0)
    {
        return -1;
    }
    if (num==1 || num == 0)
    {
        return 1;
    }

    return num * factorial(num - 1);
}

int main()
{
    int inp, ans;
    printf("Enter a number to know its factorial: ");
    scanf("%d", &inp);
    ans = factorial(inp);
    if (ans==-1)
    {
        printf("Please enter positive number!");
        return 0;
    }
    printf("Factorial of %d is %d", inp, ans);
    return 0;
}