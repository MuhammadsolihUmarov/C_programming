#include <stdio.h>


//Binary representation of the given input calculator
int main()
{
    char input;
    int decimal;
    printf("Enter input (0-9, A-F): ");
    scanf("%c", &input);
    // convert input to decimal
    sscanf(&input, "%x", &decimal);
    // print decimal value in binary
    printf("Binary representation: ");
    for (int i = 3; i >= 0; i--) {
        if (decimal & (1 << i)) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n");
    return 0;
}
