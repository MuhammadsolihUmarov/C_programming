#include <stdio.h>

int main()
{
    /*Prints right triangle till  entered value*/
    int inp, n, num;
    printf("Enter a number to print triangle: ");
    scanf("%d", &inp);
    for (num = 1; num <= inp; num++)
    {
        //printf("first");
        for (n = 1; n <= num; n++)
        {
            printf("%d", n);
            //printf("second");
        }
        printf("\n");
    }
}