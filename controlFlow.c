#include <stdio.h>


//Grade controlflow. Different output depending on grade score
int main()
{
    int grade;
    printf("Enter your grade: ");
    scanf("%d", &grade);
    if (grade >= 80)
    {
        printf("Excellent job!");
    }
    else if (grade >= 60)
    {
        printf("You passed. Not bad...");
    }
    else 
    {
        printf("Oh. You didn't pass...");
    }
    return 0;
}