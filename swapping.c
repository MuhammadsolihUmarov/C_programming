#include <stdint.h>

//Basic swapping
int main()
{
    float v1, v2, temp;
    v1 = 1.25;
    v2 = 2.5;
    printf("Before:\nVeriable 1: %lf. Variable 2: %lf ", v1, v2);
    temp = v1;
    v1 = v2;
    v2 = temp;
    printf("After:\nVeriable 1: %lf. Variable 2: %lf ", v1, v2);
}