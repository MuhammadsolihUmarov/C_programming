#include<stdio.h>

#define SIZE 11


int main()
{
    /*Multiplication table printer*/
    int multTable[SIZE][SIZE], ans;
    for (int i = 1; i <= SIZE;i++)
    {
        for (int j = 1; j <= SIZE;j++)
        {
            ans = i * j;
            multTable[i][j]=ans;
        }
    }
    for (int i = 1; i < SIZE; i++)
    {
        for (int j = 1; j < SIZE; j++)
        {
            printf("%5d ", multTable[i][j]);
        }
        printf("\n");
    }
    return 0;
}