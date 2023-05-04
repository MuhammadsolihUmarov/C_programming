#include<stdio.h>

#define SIZE 5

int sortedOrNot(int arr[SIZE])
{
    int sorted=1;
    for (int i=0; i < SIZE - 1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            sorted = 0;
        }
    }
    return sorted;
}


void printer(int num)
{
    if (num==1)
        printf("The array is sorted\n");
    else
        printf("Array is not sorted\n");
}


int main()
{
    /*Takes values and calculates if they are sorted or not*/
    int result1, result2;
    int inp1[SIZE] = {1, 2, 3, 6, 5}, inp2[SIZE] = {1, 2, 3, 4, 5};
    result1 = sortedOrNot(inp1);
    result2 = sortedOrNot(inp2);
    printer(result1);
    printer(result2);
}