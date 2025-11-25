#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[200], str2[200];
    int freq[256] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count characters of first string
    for (int i = 0; str1[i] != '\0'; i++) {
        if (!isspace(str1[i])) {
            freq[(unsigned char)tolower(str1[i])]++;
        }
    }

    // Subtract characters of second string
    for (int i = 0; str2[i] != '\0'; i++) {
        if (!isspace(str2[i])) {
            freq[(unsigned char)tolower(str2[i])]--;
        }
    }

    // Check if all frequencies are zero
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("\nStrings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("\nStrings are anagrams!\n");
    return 0;
}
