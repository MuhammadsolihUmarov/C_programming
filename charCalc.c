#include<stdio.h>


int charInSequanceCalc(char inp)
{
    char currentChar, count=0;
    printf("Please enter a character:($ to quit) ");
    scanf(" %c", &currentChar);
    if (currentChar=='$')
        return 0;
    if (currentChar==inp)
        count = 1;
    return count + charInSequanceCalc(inp);
}

int main()
{
    /*Counts specific character in a sequance of inputs*/
    char input='c';
    int output;
    printf("Enter a character to count: ");
    scanf("%c", &input);
    output = charInSequanceCalc(input);
    printf("You entered %d '%c' in your input", output, input);
    return 0;
}