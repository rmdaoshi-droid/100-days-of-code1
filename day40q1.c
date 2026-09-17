#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    // Input matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Traverse diagonals
    for (int d = 0; d < r + c - 1; d++) {

        if (d % 2 == 0) {
            // Even diagonal: bottom to top
            int i = (d < r) ? d : r - 1;
            int j = d - i;

            while (i >= 0 && j < c) {
                printf("%d ", a[i][j]);
                i--;
                j++;
            }
        } 
        else {
            // Odd diagonal: top to bottom
            int j = (d < c) ? d : c - 1;
            int i = d - j;

            while (j >= 0 && i < r) {
                printf("%d ", a[i][j]);
                i++;
                j--;
            }
        }
    }

    return 0;
}