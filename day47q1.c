#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    int count[256] = {0}, i;

    scanf("%s", a);
    scanf("%s", b);

    if (strlen(a) != strlen(b)) {
        printf("Not anagrams");
        return 0;
    }

    for (i = 0; a[i] != '\0'; i++) {
        count[(unsigned char)a[i]]++;
        count[(unsigned char)b[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}