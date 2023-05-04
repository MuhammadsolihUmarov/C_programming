#include <stdio.h>

#define SIZE 12 //defines a variable size (it can be changed in the future) 


int main()
{
    /*Max digit finder*/
    long long phoneNumArray[SIZE];
    int i, maxIndex;
    for (i = 0; i < SIZE;i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%lld", &phoneNumArray[i]);
    }

    maxIndex = 0;
    for (i = 1; i < SIZE;i++)
    {
        //printf("I am here for loop %d\n", i);
        if (phoneNumArray[i]>phoneNumArray[maxIndex])
        {
            maxIndex = i;
        }
    }
    printf("Index of max digit is %d", maxIndex);

    return 0;
}
