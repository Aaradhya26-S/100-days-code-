// Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
char a;
int main() {
    printf("Enter a character: ");
    scanf(" %c", &a);

    if ((a == 'a') || (a == 'e') || (a == 'i') || (a == 'o') || (a == 'u') ||
        (a == 'A') || (a == 'E') || (a == 'I') || (a == 'O') || (a == 'U')) {
        printf("%c is a vowel.\n", a);
    } else if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
        printf("%c is a consonant.\n", a);
    } else {
        printf("%c is not an alphabet.\n", a);
    }
    return 0;
}
