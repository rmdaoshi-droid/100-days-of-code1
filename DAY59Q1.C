#include <stdio.h>

int main() {
    int n, arr[100], k;
    
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    int maxSum = 0;

    for (int i = 0; i <= n - k; i++) {
        int sum = 0;

        for (int j = i; j < i + k; j++) {
            sum += arr[j];
        }

        if (i == 0 || sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}