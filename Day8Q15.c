//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main() {
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);

    if (a >= 'A' && a <= 'Z') {
        printf("Uppercase alphabet\n");
    } else if (a >= 'a' && a <= 'z') {
        printf("Lowercase alphabet\n");
    } else if (a >= '0' && a <= '9') {
        printf("Digit\n");
    } else {
        printf("Special character\n");
    }
}
