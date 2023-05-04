#include<stdio.h>

#define SIZE 7

int main()
{
    /*Takes daily temperatures and calculates coldest, hottest and average weather. Prints average temperature, coldest and hottest days*/
    int i, minInd, maxInd;
    float days[SIZE];
    float total = 0, average, max, min;
    for (i = 0; i < SIZE; i++)
    {
        printf("Please enter today's weather: ");
        scanf("%f", &days[i]);
    }
    max = days[0];
    min = days[0];
    for (i = 0; i < SIZE;i++)
    {
        total += days[i];


        if (days[i]>max)
        {
            max = days[i];
            maxInd = i;
        }


        if (days[i]<min)
        {
            min = days[i];
            minInd = i;
        }
    }
    average = total / SIZE;
    printf("Average day: %.1f\nColdest day of the week was at day %d with %.1f\nHottest day of the week was at day %d with %.1f\n", average, minInd+1, min, maxInd+1, max);
}