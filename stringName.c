#include<stdio.h>
#include<string.h>

void trivalSol()
{
    char firstname[] = "Muhammadsolih";
    char lastname[7] = "Umarov"; //Putting 7 is possible
    printf("My first name is ");
    for (int i = 0; i < strlen(firstname); i++)
    {
        printf("%c", firstname[i]);
    }
    printf("\n");
    printf("My surname is ");
    for (int i = 0; i < strlen(lastname); i++)
    {
        printf("%c", lastname[i]);
    }
    printf("\n");
}


int main()
{
    /*Printing string divided in characters*/
    char firstName[] = "Muhammadsolih Umarov";
    int i = 0;

    while(firstName[i]!='\0')
    {
        printf("%c", firstName[i]);
        i++;
    }

    return 0;
}