#include<stdio.h>

//Fibunacci numbers calculator
int fibunacciCalc(long long num)
{
    long long ans;
    if (num<0)
    {
        return -1;
    }
    if (num == 1 || num == 0)
    {
        return num;
    }
    else
    {
        ans = fibunacciCalc(num-2) + fibunacciCalc(num - 1);
        return ans;
    }
}

int main()
{
    long long inp;
    long long ans;
    printf("Enter a fibunacci number: ");
    scanf("%lld", &inp);
    ans = fibunacciCalc(inp);
    printf("Fibonacci number of %lld is %lld", inp, ans);
    return 0;
}