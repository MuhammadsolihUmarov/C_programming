#include<stdio.h>


int numLessThanInput(int num)
{
    int inp1, count=0;
    printf("Please enter an input: (-1 to quit) ");
    scanf("%d", &inp1);
    if (inp1==-1)
    {
        return 0;
    }
    if (inp1<num)
    {
        count=1;
    }
    return count+numLessThanInput(num);
}

int main()
{
    /*Takes inputs and limitation number. Calculates how many inputs are less than limiting number*/
    int input, output;
    printf("Enter a limitation for the number: ");
    scanf("%d", &input);
    output = numLessThanInput(input);
    printf("The total number of the inputs less than %d is %d", input, output);
}