#include<stdio.h>

int phoneNumMax()
{
    long long phoneNum;
    int digit, max, i;
    int phoneNumArr[12];
    printf("Enter your phone number (ex: 998911234567): ");
    scanf("%lld", &phoneNum);
    //printf("%lld", phoneNum);
    for (i = 0; i < 12;i++)
    {
        digit = phoneNum % 10;
        phoneNumArr[i] = digit;
        phoneNum = phoneNum / 10;
        //printf("%d\n", phoneNum);
    }
    max = phoneNumArr[0];
    for (i = 1; i < 12; i++)
    {
        if (max<phoneNumArr[i])
        {
            max = phoneNumArr[i];
        }
    }
    return max;
}


int main()
{
    /*Finds max digit in the phone number*/
    int num;
    num = phoneNumMax();
    printf("Max digit is %d", num);
}