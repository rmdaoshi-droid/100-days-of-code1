#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[500];

    scanf("%s", filename);
    getchar();

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }

    fgets(text, sizeof(text), stdin);

    fprintf(fp, "\n%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}