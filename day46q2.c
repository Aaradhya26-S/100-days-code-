#include <stdio.h>

int main() {
    char str[200];
    int freq[26] = {0};   // frequency of lowercase letters

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {       // check lowercase alphabet
            freq[ch - 'a']++;

            if (freq[ch - 'a'] == 2) {      // repeating detected
                printf("\nFirst repeating lowercase alphabet: %c\n", ch);
                return 0;
            }
        }
    }

    printf("\nNo repeating lowercase alphabet found.\n");
    return 0;
}
