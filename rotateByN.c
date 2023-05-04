#include<stdio.h>

#define NUM 5

int main()
{
    /*Takes the value to the array and shifts the values to the right*/
    int myArr1[NUM], myArr2[5], myArr3[5];
    int n, i=0, k;
    printf("Enter %d numbers and rotating value to shift the number to the right\n", NUM);
    for (i = 0; i < NUM; i++)
    {
        printf("Enter the %d num: ", i+1);
        scanf("%d", &myArr1[i]);
    }
    printf("Enter the number to shift the entered numbers to the right: ");
    scanf("%d", &n);

    while (n > NUM)
        n = n - NUM;
    
    //Difference
    k = NUM - n;


    //Storing
    for (i = 0; i < NUM - k; i++)
    {
        myArr2[i] = myArr1[k+i]; // myArray[0]--> 4; myArray[1]--> 5;
    }

    /*for (i = 0; i < NUM - k;i++)
    {
        printf("%d  ", myArr2[i]);
    }*/

    for (i = 0; i <= n; i++)
    {
        myArr3[i+n] = myArr1[i];
    }

    /*for (i = 0; i < NUM;i++)
    {
        printf("%d  ", myArr3[i]);
    }*/

    //Reassigning
    for (i = 0; i < NUM - k;i++)
    {
        myArr1[i] = myArr2[i];
    }

    for (i = n; i < NUM;i++)
    {
        myArr1[i] = myArr3[i];
    }

    for (i = 0; i < NUM;i++)
    {
        printf("%d  ", myArr1[i]);
    }
}