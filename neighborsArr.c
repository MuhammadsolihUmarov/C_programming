#include<stdio.h>

#define SIZE 5


//Checks and prints if the neighboring number is a good neighbour
void goodNeighbourCheck()
{
    int inp[SIZE];
    int i;
    int input, previous, next, current, gNeighbour=0;
    for (i = 0; i < SIZE;i++)
    {
        printf("Enter a number to check if it is a good neighbour: ");
        scanf("%d", &inp[i]);
    }

    previous = inp[0];
    for (i = 1; i < SIZE-1;i++)
    {
        next = inp[i + 1];
        current = inp[i];
        if (previous*next==current)
        {
            gNeighbour = 1;
            break;
        }
        previous = current;
    }

    if (gNeighbour==1)
    {
        printf("Good neighbour!");
    }
    else
    {
        printf("Not good neighbour!");
    }
}


int main()
{
    goodNeighbourCheck();
}