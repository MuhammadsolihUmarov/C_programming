#include <stdio.h>


int main()
{
    /*Among 3 values, finds minimum and maxmimum values*/
    int a, b, c;
    int max, min;
    printf("Welcome. Find min and max among 3 values\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    max = a;
    min = b;
    if (a<b)
    {
        //printf("first if statement\n");
        max = b;
        min = a;
    }
    if (max<c)
    {
        //printf("c is bigger than max\n");
        max = c;
    }
    if (min>c)
    {
        //printf("c is minimum");
        min = c;
    }
    printf("Max value: %d\nMin value: %d", max, min);
}
    //Trival solution
    /*
    if (num1 > num2 && num1 > num3)
    {
        printf("First number (%.2lf) is the highest \n", num1);
        if (num2 > num3)
        {
            printf("Third number (%.2lf) is the lowest", num3);
        }
        else
        {
            printf("Second number (%.2lf) is the lowest", num2);
        }
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("Second number (%.2lf) is the highest \n", num2);
        if (num1 > num3)
        {
            printf("Third number (%.2lf) is the lowest", num3);
        }
        else
        {
            printf("First number (%.2lf) is the lowest", num1);
        }
    }
    else 
    {
        printf("Third number (%.2lf) is the highest \n", num3);
        if (num1 > num2)
        {
            printf("Second number (%.2lf) is the lowest", num2);
        }
        else
        {
            printf("First number (%.2lf) is the lowest", num1);
        }
    }
}*/