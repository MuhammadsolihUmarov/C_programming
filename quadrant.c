#include <stdio.h>

int main()
{
    /*Quadrant determiner depending on X and Y coordinate*/
    int Xcord, Ycord;
    printf("Enter X cord: ");
    scanf("%d", &Xcord);
    printf("Enter Y cord: ");
    scanf("%d", &Ycord);

    //First quadrant
    if (Xcord > 0 && Ycord > 0)
    {
        printf("First quadrant");
    }
    else if (Xcord >= 0 && Ycord > 0)
    {
        printf("First quadrant");
    }
    else if (Xcord > 0 && Ycord >= 0)
    {
        printf("First quadrant");
    }

    //Second quadrant
    else if (Xcord < 0 && Ycord > 0)
    {
        printf("Second quadrant");
    }
    else if (Xcord <= 0 && Ycord > 0)
    {
        printf("Second quadrant");
    }
    else if (Xcord < 0 && Ycord >= 0)
    {
        printf("Second quadrant");
    }

    //Third quadrant
    else if (Xcord < 0 && Ycord < 0)
    {
        printf("Third quadrant");
    }
    else if (Xcord <= 0 && Ycord < 0)
    {
        printf("Third quadrant");
    }
    else if (Xcord < 0 && Ycord <= 0)
    {
        printf("Third quadrant");
    }

    //Fourth quadrant
    else if (Xcord > 0 && Ycord < 0)
    {
        printf("Fourth quadrant");
    }
    else if (Xcord >= 0 && Ycord < 0)
    {
        printf("Fourth quadrant");
    }
    else if (Xcord > 0 && Ycord <= 0)
    {
        printf("Fourth quadrant");
    }
    else if (Xcord == 0 && Ycord == 0)
    {
        printf("Centre of the graph (0, 0)");
    }
    else
    {
        printf("BUG: X: %d Y: %d", Xcord, Ycord);
    }
}