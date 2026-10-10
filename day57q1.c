#include <stdio.h>

int main() {
    int n, arr[100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int previousGreater = -1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                previousGreater = arr[j];
                break;
            }
        }

        printf("%d", previousGreater);

        if (i < n - 1) {
            printf(", ");
        }
    }

    return 0;
}