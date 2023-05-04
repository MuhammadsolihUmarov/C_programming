#include<stdio.h>

#define NUM 5


int main()
{
    /*Array rotator*/
    int rotator[NUM], initial, new[NUM], i, count;
    printf("Please enter %d numbers to rotate the array \n", NUM);
    for (i = 0; i < NUM;i++)
    {
        printf("Please enter a number: ");
        scanf("%d", &rotator[i]);
    }

    count = 4;
    for (i = 0; i < NUM; i++)
    {
        new[count-i] = rotator[i];
        printf("%d\n", rotator[i]);
    }
    printf("Soft version: ");
    for (i = 0; i < NUM;i++)
    {
        printf("%d ", rotator[i]);
    }
    printf("\nRotated version: ");
    for (i = 0; i < NUM;i++)
    {
        printf("%d ", new[i]);
    }
}