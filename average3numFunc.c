#include<stdio.h>


float findAverage(int grade1, int grade2, int grade3)
{
    float average;
    average = (grade1 + grade2 + grade3) / 3.0;
    return average;
}

//Basic average of 3 grades calculator
int main()
{
    int g1, g2, g3;
    printf("Enter 3 grades: ");
    scanf("%d%d%d", &g1, &g2, &g3);
    printf("Average of the given numbers is %.1f", findAverage(g1, g2, g3));
    return 0;
}