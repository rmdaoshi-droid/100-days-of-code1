#include <stdio.h>

int main() {
    int n, element;

    printf("Enter current size of sorted array: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &element);

    int i = n - 1;
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = element;

    printf("Array after insertion: ");
    for (int j = 0; j < n + 1; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}