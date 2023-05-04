#include<stdio.h>
#include<stdlib.h>

#define SIZE 21
#define VERIETY 10


int main()
/*Counts and prints most repeated number in the array of size 21*/
{
    int max = 0, maxInd;
    int input[SIZE] = {0, 0, 0, 1, 2, 6, 1, 3, 2, 3, 0, 1, 0, 3, 4, 5, 7, 2, 8, 9,  -1};
    int output[VERIETY] = {0};
    for (int i = 0; i != -1; i++)
    {
        if (input[i]==-1)
            break;
        else
            output[input[i]]++;
    }
    for (int i = 0; i < VERIETY;i++)
    {
        printf("Number of %ds in the array: %d\n", i, output[i]);
        if (output[i]>max)
        {
            max = output[i];
            maxInd = i;
        }
            
    }
    printf("%d appears most time in the array (Total %d times)", maxInd, max);

    return 0;
}