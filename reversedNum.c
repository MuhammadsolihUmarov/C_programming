#include <stdio.h>

//Reverse the number
int main()
{
    int num, reversed, p1, p2, p3;
    printf("Enter 3 digit number to see its reverse: ");
    scanf("%d", &num);
    p1 = num / 100;
    p2 = (num / 10) % 10;
    p3 = num % 10;
    printf("Reversed number: %d%d%d", p3, p2, p1);
}