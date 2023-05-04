#include<stdio.h>


int printTillThisNum(int num)
{
    int k;
    if (num==0)
        return 0;

    printTillThisNum(num - 1);
    printf("%d  ", num);
}

void printFromThisNum(int num)
{
    int k;
    if (num==0)
        return 0;

    printf("%d  ", num);
    printFromThisNum(num - 1);
}

int main()
{
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);
    printTillThisNum(input);
    printf("\n");
    printFromThisNum(input);
    return 0;
}