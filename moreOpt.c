#include<stdio.h>


int main()
{
    /*More optimal solution to 3 and 5 divisable program.
    Determines the sum of values from 0 to entered number divisable by both 3 and 5*/
    int num, ans=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 15; i <= num; i=i+15)
    {
        ans = ans + i;
        //printf("%d\n", i);
    }
    printf("In the range of 0 and %d, sum of the numbers divisable to both 3 and 5 is: %d", num, ans);
    return 0;
}