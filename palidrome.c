#include <stdio.h>

#define SIZE 5


int isPalindrome(int numArr[]) {
    int palindrome = 0; 
    for (int i = 0; i < SIZE / 2; i++) {
        if (numArr[i] == numArr[SIZE - i - 1]) {
            palindrome = 1; 
            break; // no need to check further
        }
    }
    return palindrome; // return the result
}


int main() {
    /*Determines if the entered array is palindrome*/
    int inp[] = {1, 2, 3, 2, 1};
    if (isPalindrome(inp)) {
        printf("It is palindrome\n");
    } else {
        printf("It is not palindrome\n");
    }
    return 0;
}
