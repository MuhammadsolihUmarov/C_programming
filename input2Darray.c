#include<stdio.h>

#define SIZE 2

//Input taker and printer for 2D array
int main()
{
    int inp[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("Enter an input for %d row and %d column: ", i+1, j+1);
            scanf("%d", &inp[i][j]);
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", inp[i][j]);
        }
        printf("\n");
    }    
}