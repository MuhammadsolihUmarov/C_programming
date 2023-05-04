#include<stdio.h>


int main()
{
    /*Prints right triangle but only one number in each line*/
    int inp, num, n;
    printf("Enter a number to print it sequancially: ");
    scanf("%d", &inp);
    for (num = 1; num <= inp;num++)
    {
        for (n = 1; n <= num; n++)
        {
            printf("%d", num);
        }
        printf("\n");
    }
    return 0;
}