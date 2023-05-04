#include<stdio.h>

#define SIZE 150


void counter(char *arr, int *maxIndex)
{
    int count[SIZE] = {0}; //temporary
    int i;

    //Create an array of frequency
    for (i = 0; i < SIZE;i++)
    {
        if ((arr[i]>='a'&&arr[i]<='z')||(arr[i]>'A'&&arr[i]<'Z')||arr[i]==' ')
        {
            count[arr[i]]++;
        }
    }

    //Finding the max index
    for (i = 0; i < SIZE;i++)
    {
        if (count[i]>maxIndex[1])
        {
            maxIndex[0] = i; //Character
            maxIndex[1] = count[i]; //Frequency
        }
    }
}


int main()
{
    /*Gets a sentance and calculates what characters or space and prints maximum value*/
    char input[SIZE]={0};
    int output[2]={0};
    /*for (int i = 0; i < SIZE; i++)
    {
        printf("Enter a word: ");
        scanf("%c", &input[i]);
        if (input[i] == '\0')
            break;
    }*/
    printf("Enter a sentence: ");
    gets(input);
    counter(&input, &output);
    if (output[0]=' ')
        printf("Max number of occurances: {space} %d times", output[1]);
    else
        printf("Max number of occurances: %c %d times", output[0], output[1]);

    return 0;
}