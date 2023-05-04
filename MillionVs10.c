#include <stdio.h>


//Clarification to the question printer: "What would you choose between 1 cent doubling every day for 30 days or 1 million dollars instantly?"
int main()
{
    int ans, days=1, total=1;
    while (days<=30)
    {
        total = total * 2;
        days++;
    }
    total = total / 100;
    if (total>1000000)
        printf("Choose the 1 cent doubling every day. It is %d million dollars in 30 days", total / 1000000);
    else
    {
        printf("Choose 1 million dollars to get instantly");
    }
    return 0;
}