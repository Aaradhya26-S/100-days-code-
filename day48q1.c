#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[200], temp[400];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters (if present)
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // If lengths are not equal, cannot be rotations
    if (strlen(str1) != strlen(str2)) {
        printf("\nNot rotations of each
