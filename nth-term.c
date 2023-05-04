#include <stdint.h>


//Finds a(n) in a sequance
int main()
{
    float d, a1, n;
    printf("Type differance value: ");
    scanf("%f", &d);
    printf("Type beginning value of the sequance: ");
    scanf("%f", &a1);
    printf("Type total number of values in the sequance: ");
    scanf("%f", &n);
    /* d = 2;
    a1 = 1;
    n = 9; */
    int an = a1 + (n - 1) * d;
    printf("a(n) of d=%f, a1=%f, n=%f is %d", d, a1, n, an);
    return 0;
}
