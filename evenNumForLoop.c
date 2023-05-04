#include<stdio.h>

//Sequance of even numbers printer using for loop
int main()
{
    int inp, i;
    printf("Enter a number to get its even sequance: ");
    scanf("%d", &inp);
    if (inp%2==1)
    {
        inp = inp - 1;
    }
    for (i = 1; i <= inp; i++)
    {
        if (i%2==0)
        {
            printf("%d ", i);
        }
    }
}