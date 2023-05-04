#include<stdio.h>

/*Factorial printer*/
long long factorialCalculator(int num)
{
    long long factorial=1;
    while(num>0)
    {
        factorial *= num;
        num--;
    }
    return factorial;
}


int main()
{
    int inp;
    printf("Enter a number to evaluate to its factorial: ");
    scanf("%d", &inp);
    printf("Factorial(%d) = %lld", inp, factorialCalculator(inp));
    return 0;
}