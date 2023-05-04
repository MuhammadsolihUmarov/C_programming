#include<stdio.h>

//Value's memory address printer
int main()
{
    int a = 5;
    int *p = &a;

    printf("Value: %d\n", a);
    printf("Original address: %p\n", &a);
    printf("Pointer address %p", p);
}