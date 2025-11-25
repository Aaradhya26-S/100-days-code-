#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[300];
    char longest[300];
    int maxLen = 0, currentLen = 0;
    int start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; ; i++) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            if (currentLen == 0) {
                start = i;   // start of a new word
            }
            currentLen++;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStart = start;
            }
            currentLen = 0;   // reset for next word
        }

        if (str[i] == '\0')
            break;
    }

    // Copy the longest word
    strncpy(longest, str + maxStart, maxLen);
    longest[maxLen] = '\0';

    printf("\nLongest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
