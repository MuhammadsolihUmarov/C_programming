#include <stdio.h>

//3 digit decimal number summer
int main()
{
    int num, part1, part2, part3, sum;
    printf("Please enter 3-digit decimal number to see sum of its digits: ");
    scanf("%d", &num);
    part1 = num / 100;
    part2 = (num / 10) % 10;
    part3 = num % 10;
    sum = part1 + part2 + part3;
    printf("Sum of digits: %d", sum);
    return 0;
}