#include<stdio.h>


void main()
{
    /*Calculates sequance of entered odd numbers*/
    int seq=5, out=0, num;
    printf("Enter a sequance size: ");
    scanf("%d", &seq);
    for (int i = 1; i <= seq; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num%2==1)
        {
            out = out + num;
            //printf("Odd! %d\n", out);
        }
            
    }
    printf("Sum of odd values: %d", out);
    return 0;
}