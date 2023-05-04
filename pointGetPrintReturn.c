#include<stdio.h>


typedef struct point
{
    int p;
} Point;


int GetPointPrint(Point printVal)
{
    printf("You entered %d\n", printVal.p);
}


Point ReturnPoint()
{
    Point val;
    printf("Please enter another number to return: ");
    scanf("%d", &val.p);
    return val;
}


int main()
{
    /*Basic program to play with structs*/
    Point printing;
    Point output;
    printf("Enter a number: ");
    scanf("%d", &printing.p);
    GetPointPrint(printing);
    output = ReturnPoint();
    printf("This is returned number %d\n", output.p);
    return 0;
}
