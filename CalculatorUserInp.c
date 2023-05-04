#include <stdio.h>

//2 number calculator
int main()
{
    int num1, num2, ans;
    char oper;
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);
    printf("Type the operator (one of these / * - + $ )($ is to find the remainder): ");
    scanf(" %c", &oper);
    switch (oper)
    {
    case '/':
        if (num2 == 0)
        {
            printf("You cannot divide by 0!");
            return 1;
        }
        else
        {
            ans = num1 / num2;
            break;
        }

    case '*':
        ans = num1 * num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '+':
        ans = num1 + num2;
        break;
    case '$':
        if (num2 == 0)
        {
            printf("You cannot divide by 0!");
            return 1;
        }
        else
        {
            ans = num1 % num2;
            break;
        }
    default:
        printf("Please enter valid operator (one of these / * - + $ )($ is to find the remainder)");
        return 1;
    }
    printf("%d %c %d = %d", num1, oper, num2, ans);
}