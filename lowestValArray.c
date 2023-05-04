#include<stdio.h>


int findLowest()
{
    int arr[5];
    int grade, lowest_grade, i;
    for (i = 0; i < 5;i++)
    {
        printf("Enter a grade: ");
        scanf("%d", &arr[i]);
    }
    lowest_grade = arr[0];
    for (i = 1; i < 5;i++)
    {
        if (arr[i]<lowest_grade)
        {
            lowest_grade = arr[i];
        }
    }
    return lowest_grade;
}



int main()
{
    /*Findest the lowest number among entered numbers*/
    int lowest_grade;
    lowest_grade = findLowest();
    printf("Lowest grade among entered numbers is %d", lowest_grade);
}