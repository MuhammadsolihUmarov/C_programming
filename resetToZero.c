#include<stdio.h>

#define SIZE 3

void arrayResetter(int *arr, int size);
void arrayPrinter(int *arr, int size);

int main()
{
    /*Takes numbers from the user. Resets and prints them*/
    int arr[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("Enter number: ");
        scanf("%d", &arr[i]);
    }

    arrayResetter(arr, SIZE);
    arrayPrinter(arr, SIZE);
}

void arrayResetter(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        arr[i] = 0;
    }
}

void arrayPrinter(int *arr, int size)
{
    printf("Resetted numbers: ");
    for (int i = 0; i < size;i++)
    {
        printf("%d ", arr[i]);
    }
}