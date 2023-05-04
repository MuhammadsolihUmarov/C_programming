#include <stdio.h>


int main()
{
    /*Calculates sum of numbers from 0 to entered number*/
    int ans=0, n, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    //printf("");
    for (n = 1; n <= num;n++)
    {
        ans = ans + n;
        if (n==1)
        {
            printf("%d", n);
        }
        else
        {
            printf(" + %d", n);
        }
    }
    printf(" = %d\n", ans);

    printf("Sum of all number from 1 to %d is %d", num, ans);
}