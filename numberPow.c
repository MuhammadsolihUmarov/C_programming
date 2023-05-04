#include <stdio.h>

int main()
{
    /*Takes the number, power and calculates Num(pow) for positive numbers*/
    int num, pow, ans;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &pow);
    ans = num;
    while(pow>1)
    {
        ans = ans * num;
        pow--;
        //printf("HEY%d", num1);
    }
    printf("Answer: %d", ans);
    return 0;
}
