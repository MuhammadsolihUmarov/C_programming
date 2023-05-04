#include<stdio.h>

#define ROW 2
#define COLUMN 3

int main()
/*2D array printer*/
{
    int my2Dayarray[ROW][COLUMN]={1,2,3,4,5,6};
    for (int i=0; i < ROW;i++)
    {
        printf("ROW %i: ", i+1);
        for (int j = 0; j < COLUMN; j++)
        {
            printf(" %d  ", my2Dayarray[i][j]);
        }
        printf("\n");
    }
    return 0;
}