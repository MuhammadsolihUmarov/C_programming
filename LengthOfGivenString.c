#include<stdio.h>


int Length(char *string)
{
/*Takes pointer as an input and calculates its length*/
    int i=0;
    while(string[i]!='\0')
    {
        i++;
    }
    return i;
}

int main()
{
    int length;
    char str[100];
    printf("Please enter a string: ");
    scanf("%s", str);
    length = Length(str);
    printf("Length of the word '%s' is %d", str, length);
}