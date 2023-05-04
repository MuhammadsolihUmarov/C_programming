#include<stdio.h>

//number takes and returns its sum of divisors
int deviserSummer(int inp)
{
    int sum=1;
    if (inp == 1)
    {
        return 1;
    }
    for (int i = 2; i <= inp/2; i++)
    {
        //printf("I:  %d", i);
        if (inp%i==0)
        {
            sum += i;
            //printf("Devisors: %d   ", i);
        }
    }

    return sum+=inp;
}

int main()
{
    int num;
    printf("Enter a number to get its sum of devisors: ");
    scanf("%d", &num);
    printf("Sum of devisors = %d", deviserSummer(num));
    return 0;
}