#include<stdio.h>

int evenCount()
{
    int temp, count=0;
    printf("Please enter a number: (-1 to quit) ");
    scanf("%d", &temp);
    if (temp==-1)
        return 0;
    if (temp%2==0)
        count++;
    return count + evenCount();
}

int main()
{
    /*Takes numbers untill user gives -1 and
    Number of even numbers enetered will be printed*/
    int output;
    output = evenCount();
    printf("Number of even numbers you entered: %d", output);
}