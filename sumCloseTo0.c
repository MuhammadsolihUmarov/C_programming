#include<stdio.h>
#include<stdlib.h>

#define SIZE 4
#define SUM 0


void trivalSolution()
{
    /*Takes and calculates sum of 2 values which are closest to 0*/    
    int arr[SIZE];
    int i, k, j, closest0_1, closest0_2;
    int ans;

    for (i = 0; i < SIZE;i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        if (arr[i]<0)
        {
            arr[i] = -arr[i];
        }
        
    }

    closest0_1 = arr[0];
    closest0_2 = arr[1];
    for (i = 2; i < SIZE; i++)
    {
        k = closest0_1 - arr[i];
        if (k>0)
        {
            closest0_1 = arr[i];
        }
    }
    for (i = 2; i < SIZE; i++)
    {
        k = closest0_2 - arr[i];
        if ( k>0 && &k != &closest0_1 )
        {
            closest0_2 = arr[i];
        }
    }
    ans = closest0_1 + closest0_2;

    printf("Sum of the numbers close to zero is %d (%d + %d = %d)", ans, closest0_1, closest0_2, ans);
}


void compSolution()
{
    /*Takes and calculates sum of 2 values which are closest to 0 in more efficient way*/
    int arr[SIZE] = {1, 2, 3, -1};
    int i, k, j, closest0Sum, currentSum;
    int ans;

    /*for (i = 0; i < SIZE;i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }*/

    /*for (i = 0; i < SIZE;i++)
    {
        if (arr[i]<0)
        {
            arr[i] = -arr[i];
        }
    }*/

    closest0Sum = arr[0] + arr[1];

    for (i = 0; i < SIZE; i++)
    {
        for (j = i + 1; j < SIZE; j++)
        {
            currentSum = arr[i] + arr[j];
            if (abs(currentSum) < abs(closest0Sum))
            {
                closest0Sum = currentSum;
            }
        }
    }

    printf("Sum of the numbers close to zero is %d", closest0Sum);
}


int main()
{
    compSolution();
    //trivalSolution();
}