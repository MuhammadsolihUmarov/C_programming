#include<stdio.h>
#include<string.h>

#define SIZE 100


int length(char string[])
/*takes an array 
returns the length of the array*/
{
    int len = 0, i=0;
    while(string[i]!='\0')
    {
        len++;
        i++;
    }
    return len;
}



int isPalindrome(char string[], int length) //Sample parameters: wow | 3
/*Takes an array and length of the array 
returns whether it is palindrome*/
{
    int flag=1;

    for (int i = 0; i < length/2;i++)
    {
        if (string[i] != string[length - i-1])
        {
            flag = 0;
            //printf("if statement\n");
            break;
        }
    }


    return flag;
}




int main()
{
    /*Calculates if the entered string is polindrome in decimal level*/
    char input[SIZE];
    int pal, len;

    printf("Enter a word to know if it is polindrome: ");
    scanf("%s", input);

    //peforming the operations
    len = length(input);
    //printf("%d\n", len);
    pal = isPalindrome(input, len);
    if (pal==1)
    {
        printf("It is a polindrome!");
    }
    else
    {
        printf("It is not a polindrome!");
    }
    return 0;
}