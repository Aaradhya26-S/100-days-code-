#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];

    printf("Enter your full name: ");
    fgets(str, sizeof(str), stdin);

    // Print first character if it's a letter
    if (isalpha(str[0])) {
        printf("%c ", toupper(str[0]));
    }

    // Print initials after each space
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i - 1] == ' ' && isalpha(str[i])) {
            printf("%c ", toupper(str[i]));
        }
    }

    printf("\n");
    return 0;
}
