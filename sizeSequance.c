#include<stdio.h>


int main()
{
    /*Takes size and numbers to know if the entered values are in ascending order*/
    int size, inp=0, pint=0, dif;
    printf("Enter a size: ");
    scanf("%d", &size);
    printf("Enter a number: ");
    scanf("%d", &inp);
    while(inp!=-1)
    {
        
        printf("Enter next number: (Your last number was %d and your size is %d): ", pint, size);
        scanf("%d", &inp);
        if (inp-pint==size)
        {
            printf("Very ascending\n");
            pint = inp;
        }
        else
        {
            printf("Not very ascending\n");
        }
    }

    return 0;
}