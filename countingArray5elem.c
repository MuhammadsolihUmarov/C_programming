#include<stdio.h>
#include<stdlib.h>

#define SIZE 50
#define VERIETY 6

int main()
{
/*Array numbers printer according to the frequency of the numbers in the range of 0 to 5*/
    int input[SIZE] = {0, 0, 0, 1, 2, 1, 1, 3, 2, 3, 0, 1, 0,3, 4,5, -1};
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
        printf("Number of %ds: %d\n", i, output[i]);
    }
    return 0;
}