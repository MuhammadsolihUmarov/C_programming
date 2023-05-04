#include<stdio.h>


int main()
{
    /*Sums all the numbers divisable by 3 and 5.
    It started from 1 to entered value*/
    int num, ans=0;
    printf("Enter a number to know its sum of values divisable by 3 and 5: ");
    scanf("%d", &num);
    for (int i = 1; i <= 100; i++)
    {
        if (i%5==0 && i%3==0)
        {
            ans = ans + num;
            //printf("%d\n", i);
        }
    }
    printf("%d", ans);
}