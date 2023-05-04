#include <stdint.h>

//Calculate the salary based on hourly wage and the hours employee worked in this month
int main()
{
    float WHours, HSalary;
    printf("Tell me about your employee's hourly salary: ");
    scanf("%f", &HSalary);
    printf("Tell me about how many hours did your emplyee work last month? ");
    scanf("%f", &WHours);
    printf("You should give %1f to your employee", WHours*HSalary);
}