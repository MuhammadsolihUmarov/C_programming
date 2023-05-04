#include<stdio.h>


int main()
{
    /*Counts how many 3s and 5s can entered number be divisable of*/
    int inp=10, out=0;
    for (int i = 3; i <= inp; i+=3)
    {
        out += i;
    }
    for (int j = 5; j <= inp; j+=5)
    {
        out += j;
    }
    printf("%d", out);
    return 0;
}