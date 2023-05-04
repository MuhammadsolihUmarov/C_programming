#include <stdio.h>

int main()
/*Evaluates certain number to certain power*/
{
    int num, pow, ans, p;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the power: ");
    scanf("%d", &pow);
    ans = num;
    for (p=1; p<pow; p++)
    {
        ans = ans * num;
    }
    printf("%d^%d = %d", num, pow, ans);
}