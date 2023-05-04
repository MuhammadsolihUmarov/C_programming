#include<stdio.h>


int sum(int inp)
{
    if (inp!=0)
    {
        inp += sum(inp - 1);
    }
    return inp;
}


int main()
{
    /*Calculates sum of the numbers from 1 to entered number*/
    int num, ans;
    printf("Enter a number: ");
    scanf("%d", &num);
    ans = sum(num);
    printf("Sum of the numbers from 1 to %d is %d", num, ans);
    return 0;
}