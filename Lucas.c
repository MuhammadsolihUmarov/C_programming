#include<stdio.h>

int LucasPrinter(int num)
{
    int out;
    if (num==0)
        return 2;
    else if (num==1)
        return 1;

    out = LucasPrinter(num - 1) + LucasPrinter(num-2);
    return out;
}

int main()
{
    /*Number finder by its index in the Lucas sequance of numbers*/
    int input=3, output;
    printf("Enter the size of the Lucas sequence: ");
    scanf("%d", &input);
    output = LucasPrinter(input);
    printf("Lucas number at the Index %d is %d", input, output);
}