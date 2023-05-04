#include<stdio.h>


char toLower(char c)
{
    if (c>='A'&&c<='Z')
    {
        return c - 'A' + 'a'; //Look at ACII table
    }
    return c; //If it is lower case, just return it
}

char toUpper(char c)
{
    if (c>='a'&&c<='z')
    {
        return c - 'a' + 'A'; //Look at ACII table
    }
    return c; //If it is upper case, just return it
}

int main()
/*Changing the cases of the entered character*/
{
    int lowerCase, inp, upperCase;
    printf("Enter character: %c", inp);
    scanf("%c", &inp);
    lowerCase = toLower(inp);
    upperCase = toUpper(inp);
    printf("Lower case of that character: %c\n", lowerCase);
    printf("Upper case of that character: %c", upperCase);
    return 0;
}