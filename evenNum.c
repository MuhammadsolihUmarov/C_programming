#include<stdio.h>


//Sequance of even numbers printer using while loop
int main()
{
    int num = 2, inp;
    printf("Enter a number to get even number sequance: ");
    scanf("%d", &inp);

    printf("Sequance of even numbers from 1 to %d: ", inp);
    if (inp%2==1)
    {
        inp = inp - 1;
    }

    while (inp%2==0 && inp!=0 && inp>=num)
    {
        printf("%d ", num);
        num = num + 2;
    }
    return 0;
}