#include<stdio.h>
#include<string.h>

#define SIZE 1000


int numWordCalc(char inp[]);

int main()
{
    /*Calculates number of words in a sentance*/
    char input[SIZE];
    int numWords;
    printf("Enter some words: ");
    gets(input);
    //printf("%s", input);
    numWords = numWordCalc(input);
    printf("Number of words in '%s' is %d", input, numWords);
}

int numWordCalc(char inp[])
{
    int num=1;
    for (int i = 0; i < SIZE; i++)
    {
        if (inp[i] == ' ')
            num++;
    }
    return num;
}
