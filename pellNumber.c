#include<stdio.h>


int PellCalc(int num)
{
    int ans;
    if (num==0 || num == 1)
        return num;
    
    if (num>1)
    {
        ans = 2 * PellCalc(num - 1) + PellCalc(num - 2);
        num -= 1;
        return ans;
    }
}

int main()
{
    /*Takes index and prints the Pell number. 
    IT HAS MEMORY LIMITATIONS*/
    int input, output;
    printf("Enter an index of the number in Pell sequance: ");
    scanf("%d", &input);
    output = PellCalc(input);
    printf("Index %d's pell number = %d", input, output);
}