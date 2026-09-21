#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    int spaces = 0, digits = 0, special = 0;

    // Read a full line (including spaces)
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == ' ')
            spaces++;
        else if (isdigit((unsigned char)ch))
            digits++;
        else if (!isalpha((unsigned char)ch))
            special++;
        // letters (isalpha) are simply not counted
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}