#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

//Array swapper using pointers
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


void arraySwapArrayPointers(int **ptr1, int **ptr2) //Swapping pointers
{
    int *temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}


int main()
{
    int oddArr[SIZE] = {1, 3, 5, 7, 9};
    int evenArr[SIZE] = {2, 4, 6, 8, 10};
    int sizeArr1, sizeArr2;
    Array2Print(oddArr, evenArr);
    printf("Swapping each value...\n");
    arraySwapArrayPointers(&oddArr, &evenArr);
    Array2Print(oddArr, evenArr);
}