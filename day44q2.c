#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    // Read a full line (including spaces)
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            str[i] = '-';
    }

    printf("%s\n", str);

    return 0;
}