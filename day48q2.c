#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[300];
    int start = 0, i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Reverse word by word
    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            reverse(str, start, i - 1);  // reverse the current word
            start = i + 1;              // next word starts
        }
        if (str[i] == '\0')
            break;
    }

    printf("\nOutput: %s", str);

    return 0;
}
