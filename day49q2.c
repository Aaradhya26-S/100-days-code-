#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    int len;

    printf("Enter your full name: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    printf("\nOutput: ");

    // Print first initial
    if (isalpha(str[0])) {
        printf("%c ", toupper(str[0]));
    }

    // Find surname start (after last space)
    int lastSpace = -1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    // Print middle initials (characters after spaces but before surname)
    for (int i = 1; i < lastSpace; i++) {
        if (str[i - 1] == ' ' && isalpha(str[i])) {
            printf("%c ", toupper(str[i]));
        }
    }

    // Print surname fully
    printf("%s\n", str + lastSpace + 1);

    return 0;
}
