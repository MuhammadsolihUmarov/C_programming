#include<stdio.h>
#include <stdlib.h>



void findAllIndices(int digitToFind, int phoneNumArr[12])
{
    //printf("%d ", maxDigitIndex);
    int digit, i;
    for (int i = 0; i < 12; i++)
    {
        printf("%d\n", phoneNumArr[i]);
        if (phoneNumArr[i]==digitToFind)
        {
            //printf("%d : %d ", phoneNumArr[i], i);
            printf("Index of %d is %d\n", digitToFind, i);
        }
    }
}


int *phoneNumArray(long long phoneNum)
/*Takes phone number as an input and returns the array of the phone number*/
{
    int *phoneNumArray = malloc(12 * sizeof(int));
    int digit, i;
    for (i = 0; i < 12; i++)
    {
        digit = phoneNum % 10;
        phoneNumArray[i] = digit;
        phoneNum=phoneNum/10;
    }

    return *phoneNumArray;
}


int maxFind(long long phoneNum)
{
    int phoneNumArr[12]={0};
    int i, digit, maxDigit=0;
    for (i = 0; i < 12; i++)
    {
        digit = phoneNum % 10;
        phoneNumArr[i] = digit;
        phoneNum = phoneNum / 10;
        if (digit>maxDigit)
        {
            maxDigit = digit;
        }
    }

    //findAllIndices(maxDigitIndex, phoneNumArr);
    return maxDigit;
}


int main()
{
    /*Takes the phone number, converts it to array and prints it again.
    Has potential to find max number in the array*/
    long long phoneNumber;
    int max, arr[12];
    printf("Enter a phone number: ");
    scanf("%lld", &phoneNumber);
    //printf("%lld", phoneNumber);
    //max = maxFind(phoneNumber);
    //printf("%d", max);
    *arr = phoneNumArray(phoneNumber);
    for (int i = 0; i < 12;i++)
    {
        printf("%d\n", arr);
    }
}