#include <stdio.h>

int main()
{
    /*Pyramid of numbers printer*/
    int i, j, k;
    int blankSpaces;
    int n;
    int currentValue = 1;

    printf("Insert 'n' (number of rows in pyramid): ");
    scanf("%d", &n);

    blankSpaces = n - 1;
    for (i = 1; i <= n;i++)
    {
        for (k = blankSpaces; k >= 1;k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i;j++)
        {
            printf("%d ", currentValue);
            currentValue++;
        }
        printf("\n");
        blankSpaces--;
    }
    return 0;
}
