#include<stdio.h>

#define SIZE 7

//Highest sum of 2 neighburing values finder
int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 1}, highestSum=0;
    int before, after;

    for (int i = 1; i < SIZE;i+=2)
    {
        before = arr[i - 1] + arr[i];
        after = arr[i] + arr[i + 1];
        if (before>highestSum)
        {
            highestSum = before;
        }
        if(after>highestSum)
        {
            highestSum = after;
        }
    }
    printf("Highest sum of numbers is %d", highestSum);
    return 0;
}