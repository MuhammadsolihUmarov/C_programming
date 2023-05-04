#include<stdio.h>

typedef struct RationalNum
{
    int nominator;
    int denominator;
} RationalNum;

//We will work with the memory with structs in this program

RationalNum increment(RationalNum* num)
{
    (*num).nominator++;
    (*num).denominator++;
};


RationalNum Adder(RationalNum* num, int add)
{
    (*num).nominator += add;
    (*num).denominator += add;
}


RationalNum Divide(RationalNum* num, int divider)
{
    (*num).nominator /= divider;
    (*num).denominator /= divider;
}

RationalNum Multiply(RationalNum* num, int multiplier)
{
    (*num).nominator *= multiplier;
    (*num).denominator *= multiplier;
}

RationalNum Subtract(RationalNum* num, int subtracter)
{
    (*num).nominator -= subtracter;
    (*num).denominator -= subtracter;
}


int main()
{
    RationalNum test;
    test.nominator = 3;
    test.denominator = 3;
    printf("Enter nominator: ");
    scanf("%d", &test.nominator);
    printf("Enter denimonator: ");
    scanf("%d", &test.denominator);
    printf("Initialized struct. Nominator: %d Denominator: %d\n", test.nominator, test.denominator);
    increment(&test);
    printf("Incremented both by 1: %d %d\n", test.nominator, test.denominator);
    printf("Adding 2 to both of them...\n");
    Adder(&test, 2);
    printf("Added 2: %d %d\n", test.nominator, test.denominator);
    Subtract(&test, 2);
    printf("Subtructed 2 from both of them: %d %d\n", test.nominator, test.denominator);
    Multiply(&test, 3);
    printf("Multiplied both of them by 3: %d %d\n", test.nominator, test.denominator);
    Divide(&test, 2);
    printf("Divided both of them by 2: %d %d\n\n\n\n", test.nominator, test.denominator);
    printf("Adding 5 to the Nominator.\n");
    test.nominator += 5;
    printf("Is nominator more than denominator? (1=true, 0=false): %d\n", test.nominator > test.denominator);
    printf("Are these values equal? (1=true, 0=false): %d\n", test.nominator == test.denominator);
    printf("Are not they equal? (1=true, 0=false): %d\n", test.nominator != test.denominator);
    printf("Adding 6 to denominator...\n");
    test.denominator += 6;
    printf("is denominator more than nominator now? (1=true, 0=false): %d\n", test.nominator < test.denominator);
    printf("Final values: Nominator %d Denominator %d", test.nominator, test.denominator);

    return 0;
}