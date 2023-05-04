#include<stdio.h>


//Character to integer calculator
int charToIntConverter(char a, char b, char c)
{
    int finalResult;
    if (a>'9'||a<'0'||b>'9'||b<'0'||c>'9'||c<'0')
    {
        printf("Enter only numbers!");
        return -1;
    }
    else
    {
        a -= '0';
        b -= '0';
        c -= '0';

        finalResult = a *100+ b*10 + c;
        return finalResult;
    }
}


int main()
{
    char a, b, c, result;
    printf("Enter 3 numbers with spaces between them: ");
    scanf("%c %c %c", &a, &b, &c);
    result = charToIntConverter(a, b, c);
    if (result!=-1)
    printf("(Warning! There has beem internal conversions from char data type to integer data type)\n%c %c %c characters are converted to decimal and added as digits: %d", a, b, c, charToIntConverter(a, b, c));
}