#include<stdio.h>

//2D array's memory representation
int main()
{
    long long inp[2][3] = {123456};
    for (int i = 0; i < 2;i++)
    {
        for (int j = 0; j < 3;j++)
        {
            printf("Address of inp[%d][%d] is %lu.\n ", i, j, &inp[i][j]);
        }
    }
}