#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

//Swapping the array by replacing its each value
void Printer(int arr[])
{
    int size = SIZE;
    printf("Numbers in the array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d,  ", arr[i]);
    }
    printf("\n");
}


void Array2Print(int arr1[], int arr2[])
{
    printf("First array:\n");
    Printer(arr1);
    printf("Second array:\n");
    Printer(arr2);
}




void arraySwapperValues(int inp1[], int inp2[2])
{
    int temp, i;
    for (i = 0; i < SIZE;i++)
    {
        temp = inp1[i];
        inp1[i] = inp2[i];
        inp2[i] = temp;
    }
}


int main()
{
    int oddArr[SIZE] = {1, 3, 5, 7, 9};
    int evenArr[SIZE] = {2, 4, 6, 8, 10};
    int sizeArr1, sizeArr2;
    Array2Print(oddArr, evenArr);
    printf("Swapping each value...\n");
    arraySwapperValues(oddArr, evenArr);
    Array2Print(oddArr, evenArr);
}