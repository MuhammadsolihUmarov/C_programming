#include <stdio.h>


//Basic asterics printer
int main()
{
    int num=0, specified;
    printf("Enter number of asteriks to print: ");
    scanf("%d", &specified);
    while(num<specified)
    {
        printf("*");
        num++;
    }
    return 0;
}