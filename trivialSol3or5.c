#include<stdio.h>


int main()
{
    /*Takes number, in the range from 1 to certain number it calculates sum of all 3 and 5 divisable numbers*/
    int inp, out=0;
    printf("Enter a number to know the sum of numbers divisible by 3 or 5 starting from 1: ");
    scanf("%d", &inp);
    for (int i = 1; i <= inp; i++)
    {
        if (i%3==0||i%5==0)
        {
            out = out + i;
            //printf("%d\n", i);
        }
    }
    printf("%d", out);
    return 0;
}