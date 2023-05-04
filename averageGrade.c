#include <stdio.h>

//Grade average calculator
int main()
{
    int grade1, grade2, grade3;
    float total;
    printf("What was your grade in the first class?  ");
    scanf("%d", &grade1);
    printf("What was your grade in the second class?  ");
    scanf("%d", &grade2);
    printf("What was your grade in the third class?  ");
    scanf("%d", &grade3);
    total = (grade1 + grade2 + grade3) / 3.0;
    printf("Your average grade: %lf", total);
}