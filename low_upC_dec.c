#include <stdio.h>

int main()
/*Determines status of the entered character*/
{
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);
    if (input>='a' && input <= 'z')
        printf("It is lowercase character!");
    else if (input>='A' && input <= 'Z')
        printf("It is uppercase character!");
    else if (input>=9)
        printf("It is decimal");
    else
    printf("Other...");
    return 0;
}