#include<stdio.h>

#define SIZE 5

int arraySummer(int size, int *arr); //We declare it here and use it later


int main()
{
    /*Takes the array and prints its sum of values*/
    int arr[SIZE];
    int i, sum;

    for (i = 0; i < SIZE; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
    sum = arraySummer(SIZE, arr);
    printf("Sum of the entered array: %d", sum);

    return 0;
}

int arraySummer(int size, int *arr)
{
    int i, sum=0;

    for (i = 0; i < size;i++)
    {
        sum += arr[i];
    }

    return sum;
}