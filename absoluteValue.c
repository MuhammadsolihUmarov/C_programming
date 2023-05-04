#include <stdio.h>


//Absolute value finder (abs value of 1 and -1 is 1).
int main()
{
    int num, absoluteNum;
    printf("Enter a number to convert it to absolute value: ");
    scanf("%d", &num);
    if (num<0)
    {
        absoluteNum = num * -1;
    }
    printf("%d's absolute value is [%d]", num, absoluteNum);
}