#include<stdio.h>


#define SIZE 26
#define SIZEinp 100


void initializeAlphabet(char arr[])
{
    int n, start=97, limit=122; //start, limit values are taken from ACII table
    int current = start;
    for (n = 0; n <= SIZE;n++)
    {
        arr[n] = current;
        current++;
    }
    arr[n] = '\0';
}


int counter(char arr[], char given[], int count[])
{
    int n, j;
    //Iterating over the alphabet and counting the occurances
    for (n = 0; n < SIZE; n++)
    {
        for (j = 0; j < SIZEinp; j++)
        {
            if (given[j]=='\0')
            {
                break;
            }
            if (arr[n]==given[j])
            {
                count[n]++;
            }
        }
    }
}

//Counts the frequency of the given character in Alphabet
int main()
{
    char arr[SIZE], inp[SIZEinp]={'a', 'b', 'c', 'z', '\0'};
    int count[SIZE] = {0};
    int i, input;

    initializeAlphabet(arr);

/*  Prints alphabet
    for (i = 0; i < SIZE;i++)
    {
        printf("%c\n", arr[i]);
    }*/

    for (i = 0; i < SIZEinp;i++)
    {
        printf("Enter a character (0 to quit): ");
        scanf(" %c", &inp[i]);
        if (inp[i]=='0')
            break;
    }
    inp[i] = '\0';

    counter(arr, inp, count);
    for (i = 0; i < SIZE; i++)
    {
        printf("Number of %c (only lower case) in the array: %d\n", arr[i], count[i]);
    }
}   