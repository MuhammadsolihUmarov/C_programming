#include<stdio.h>

#define SIZE 100


int strlen(char array[])
{
    int len = 0;
    while(array[len]!='\0')
    {
        len++;
    }
    return len;
}


char *strcpy(char *destination, char *source)
{
    char *tempChar;
    int i=0;
    tempChar = destination;

    while(*source!='\0')
    {
        destination[i] = *source;
        i++;
        source++;
    }
    destination[i] = '\0';

    return tempChar;
}


int strcmp(char str1[], char str2[])
{
    int i, result = 0;

    for (i = 0; i < SIZE;i++)
    {
        if (str1[i] == '\0'||str2[i]=='\0')
            break;

        if (str1[i]>str2[i])
        {
            result = -1;
        }
        else if (str1[i]<str2[i])
        {
            result = 1;
        }
    }
    return result;
}


int main()
{
    /*C's built-in functions: strcpy, strlen and strcmp are rewritten*/
    char arr[SIZE] = "hello";
    char copy1[SIZE];
    char *pointer;
    int len;
    int compare;

    pointer = strcpy(copy1, arr);
    len = strlen(arr);
    compare = strcmp(arr, copy1);

    printf("Length: %d\n", len);
    printf("Original: %s\n", arr);
    printf("Copy %s\n", copy1);
    printf("Result of the compare: (0=equal, first bigger -1, second bigger 1): %d", compare);
}