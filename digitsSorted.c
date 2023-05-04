#include<stdio.h>


int digitsSorted(int num)
{
    int units = num % 10;
    int tens = (num / 10) % 10;
    int sortedSoFar;

    if (num<100)
    {
        if (tens<units)
            return 1;
        else
            return -1;
    }
    sortedSoFar = digitsSorted(num / 10);

    if (sortedSoFar==1 && tens<units)
        return 1;
    if (sortedSoFar==-1 && tens>units)
        return -1;
    return 0;
}


int main()
{
    /*Checks if digits are sorted*/
    int input, output;
    printf("Enter a number: ");
    scanf("%d", &input);
    output = digitsSorted(input);
    if (output==1)
        printf("It is in ascending order and sorted");
    else if(output == -1)
            printf("It is in descending order and sorted");
    else 
    {
        printf("It is not sorted!");
    }    
}