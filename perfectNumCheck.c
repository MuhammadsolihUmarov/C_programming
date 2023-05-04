#include<stdio.h>


void perfectNumChecker(int num) //returns 1 if devisors of a number = number
{
    int devisorSum=0;
    int i;
    for (i = 1; i < num; i++)
    {
        if (num%i==0)
        {
            devisorSum += i;
        }
    }
    if (devisorSum==num)
    {
        printf("Perfect number! \nSum of devisors = the entered number (%d=%d)", devisorSum, num);
    }
    else
    {
        printf("It is not perfect number! \nSum of devisors = the entered number (%d=%d)", devisorSum, num);
    }
}


int main()
{
    /*Perfect number checker*/
    int inp;
    printf("Please enter a number to check whether it is perfect number or not: ");
    scanf("%d", &inp);
    perfectNumChecker(inp);
}