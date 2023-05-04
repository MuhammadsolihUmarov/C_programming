#include<stdio.h>

#define SIZE 9
#define VERIETY 6



int main()
/*Array numbers printer according to the frequency of the numbers in the range of 5 to 10*/
{
    int sourceArr[SIZE] = {5, 6, 7, 8, 9, 10, 6, 6, 5};
    int countingArr[VERIETY] = {0};
    int maxIndex, maxNum;
    for (int i = 0; i < SIZE;i++)
    {
        countingArr[sourceArr[i] - 5]++;
    }

    maxNum = countingArr[0];
    maxIndex = 0;
    for (int i = 1; i < VERIETY;i++)
    {
        if (countingArr[i-1]<countingArr[i])
        {
            maxNum = countingArr[i];
            maxIndex = i;
        }
    }

    for (int i = 0; i < VERIETY; i++)
    {
        printf("Number of %d in source array = %d\n", i + 5, countingArr[i]);
    }

    printf("Most repeated number in the source array is %d, it was repeated %d times", maxIndex+VERIETY-1, maxNum);

    return 0;
}